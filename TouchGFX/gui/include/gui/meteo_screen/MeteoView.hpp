#ifndef METEOVIEW_HPP
#define METEOVIEW_HPP

#include <gui_generated/meteo_screen/MeteoViewBase.hpp>
#include <gui/meteo_screen/MeteoPresenter.hpp>

class MeteoView : public MeteoViewBase
{
public:
    MeteoView();
    virtual ~MeteoView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void setJunctionTempValue(int value);
    void setJunctionHumiValue(int value);
    void setJunctionAccelValue(int value);


protected:
    int lastTempValue;
    int lastHumiValue;
    int lastAccelValue;

};

#endif // METEOVIEW_HPP
