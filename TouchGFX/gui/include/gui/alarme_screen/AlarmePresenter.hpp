#ifndef ALARMEPRESENTER_HPP
#define ALARMEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class AlarmeView;

class AlarmePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    AlarmePresenter(AlarmeView& v);

    virtual void activate();
    virtual void deactivate();

    virtual ~AlarmePresenter() {}

    void newJunctionPosiValue(int value);
    void newJunctionDistValue(int value);

private:
    AlarmePresenter();

    AlarmeView& view;
};

#endif // ALARMEPRESENTER_HPP
