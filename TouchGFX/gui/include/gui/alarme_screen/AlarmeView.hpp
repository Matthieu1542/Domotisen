#ifndef ALARMEVIEW_HPP
#define ALARMEVIEW_HPP

#include <gui_generated/alarme_screen/AlarmeViewBase.hpp>
#include <gui/alarme_screen/AlarmePresenter.hpp>

class AlarmeView : public AlarmeViewBase
{
public:
    AlarmeView();
    virtual ~AlarmeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void setJunctionPosiValue(int value);
    virtual void BoutonAlarmeCliquer();
    virtual void setJunctionDistValue(int value);

protected:
    int temp;
    int alarme;
    int lastDistValue;
};

#endif // ALARMEVIEW_HPP
