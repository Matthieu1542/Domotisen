#include <gui/alarme_screen/AlarmeView.hpp>
#include <gui/alarme_screen/AlarmePresenter.hpp>

AlarmePresenter::AlarmePresenter(AlarmeView& v)
    : view(v)
{

}

void AlarmePresenter::activate()
{
	model->setScanJunctionPosi(true);
	model->setScanJunctionDist(true);
}

void AlarmePresenter::deactivate()
{

}

void AlarmePresenter::newJunctionPosiValue(int value)
{
    view.setJunctionPosiValue(value);
}

void AlarmePresenter::newJunctionDistValue(int value)
{
    view.setJunctionDistValue(value);
}
