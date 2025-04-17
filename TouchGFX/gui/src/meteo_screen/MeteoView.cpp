#include <gui/meteo_screen/MeteoView.hpp>
#include <touchgfx/utils.hpp>


MeteoView::MeteoView()
: lastTempValue(0), lastHumiValue(0), lastAccelValue(0)

{
}

void MeteoView::setupScreen()
{
    MeteoViewBase::setupScreen();
}

void MeteoView::tearDownScreen()
{
    MeteoViewBase::tearDownScreen();
}


void MeteoView::setJunctionTempValue(int value)
{
	if (lastTempValue != value)
	{
		lastTempValue = value;
		temperatureBar.setValue(value);
		temperatureBar.invalidate();
	}
}

void MeteoView::setJunctionHumiValue(int value)
{
    if (lastHumiValue != value)
    {
        lastHumiValue = value;
        Unicode::snprintf(texteHumiditeBuffer, TEXTEHUMIDITE_SIZE, "%d", value);
        texteHumidite.setWildcard(texteHumiditeBuffer);
        texteHumidite.invalidate();
    }
}

void MeteoView::setJunctionAccelValue(int value)
{
    if (lastAccelValue != value)
    {
        lastAccelValue = value;

        if (lastAccelValue >= 1000){
            YES.setVisible(true);
            NO.setVisible(false);
        } else {
            YES.setVisible(false);
            NO.setVisible(true);
        }

        YES.invalidate();
        NO.invalidate();
    }
}




