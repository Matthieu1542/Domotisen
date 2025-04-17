#ifndef METEOPRESENTER_HPP
#define METEOPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MeteoView;

class MeteoPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    MeteoPresenter(MeteoView& v);

    virtual void activate();
    virtual void deactivate();

    virtual ~MeteoPresenter() {}

    virtual void newJunctionTempValue(int value);
    virtual void newJunctionHumiValue(int value);
    virtual void newJunctionAccelValue(int value);




private:
    MeteoPresenter();

    MeteoView& view;
};

#endif // METEOPRESENTER_HPP
