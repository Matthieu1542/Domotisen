#include <gui/alarme_screen/AlarmeView.hpp>
#include <touchgfx/utils.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "stm32f7xx_hal.h"
#include "main.h"

extern TIM_HandleTypeDef htim5;

AlarmeView::AlarmeView()
:temp(0),alarme(0),lastDistValue(0)
{

}

void AlarmeView::setupScreen()
{
    AlarmeViewBase::setupScreen();
}

void AlarmeView::tearDownScreen()
{
    AlarmeViewBase::tearDownScreen();
}

void AlarmeView::BoutonAlarmeCliquer()
{
    if (temp == 0) {
        boutonAlarme.setLabelText(TypedText(T_ALARME_DESACTIVER));
        alarme=0;
        temp = 1;
    } else {
        boutonAlarme.setLabelText(TypedText(T_ALARME_ACTIVER));
        alarme=1;
        temp = 0;
    }

    boutonAlarme.invalidate();
}



void AlarmeView::setJunctionPosiValue(int value)
{

	if (value == 1 && alarme==1) {
		YES.setVisible(true);
		NO.setVisible(false);
		HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_4);
		HAL_Delay(500);
		HAL_TIM_PWM_Stop(&htim5, TIM_CHANNEL_4);
		HAL_Delay(500);
		YES.invalidate();
		NO.invalidate();
	} else {
		HAL_TIM_PWM_Stop(&htim5, TIM_CHANNEL_4);
		YES.setVisible(false);
		NO.setVisible(true);
		YES.invalidate();
		NO.invalidate();

	}

}

void AlarmeView::setJunctionDistValue(int value)
{
    if (lastDistValue != value)
    {
    	lastDistValue = value;
        Unicode::snprintf(DistanceBuffer, DISTANCE_SIZE, "%d", value);
        Distance.setWildcard(DistanceBuffer);
        Distance.invalidate();
    }
}
