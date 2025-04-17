#include <gui/volet_screen/VoletView.hpp>
#include <touchgfx/utils.hpp>
#include "main.h"
#include "stm32f7xx_hal.h"  // Nécessaire pour utiliser HAL

// Définition des Timers
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim2;

// === CONSTRUCTEUR DE LA CLASSE VOLET ===
VoletView::VoletView() {}

// === INITIALISATION DE L'ÉCRAN TOUCHGFX ===
void VoletView::setupScreen() {
    VoletViewBase::setupScreen();
    Servo_SetAngle(&htim1, TIM_CHANNEL_1, 90); // Monter le volet
    Servo_SetAngle(&htim2, TIM_CHANNEL_1, 90); // Monter le volet
}

// === LIBÉRATION DE L'ÉCRAN ===
void VoletView::tearDownScreen() {
    VoletViewBase::tearDownScreen();
}

// === BOUTON UP1 (MONTER LE VOLET) ===
void VoletView::buttonUp1Clicked() {
	Servo_SetAngle(&htim2, TIM_CHANNEL_1, 70); // Monter le volet
	HAL_Delay(1000);
	Servo_SetAngle(&htim2, TIM_CHANNEL_1, 80); // Monter le volet
}

// === BOUTON DOWN1 (DESCENDRE LE VOLET) ===
void VoletView::buttonDown1Clicked() {
	Servo_SetAngle(&htim1, TIM_CHANNEL_1, 50); // Monter le volet
	HAL_Delay(1000);
	Servo_SetAngle(&htim1, TIM_CHANNEL_1, 70); // Monter le volet
}
