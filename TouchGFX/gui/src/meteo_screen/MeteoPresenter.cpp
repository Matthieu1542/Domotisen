#include <gui/meteo_screen/MeteoPresenter.hpp>
#include <gui/meteo_screen/MeteoView.hpp>

MeteoPresenter::MeteoPresenter(MeteoView& v)
    : view(v)
{
}

void MeteoPresenter::activate()
{
	model->setScanJunctionTemp(true);
	model->setScanJunctionHumi(true);
	model->setScanJunctionAccel(true);

}

void MeteoPresenter::deactivate()
{
}

void MeteoPresenter::newJunctionTempValue(int value)
{
    view.setJunctionTempValue(value);
}

void MeteoPresenter::newJunctionHumiValue(int value)
{
    view.setJunctionHumiValue(value);
}

void MeteoPresenter::newJunctionAccelValue(int value)
{
    view.setJunctionAccelValue(value);
}

