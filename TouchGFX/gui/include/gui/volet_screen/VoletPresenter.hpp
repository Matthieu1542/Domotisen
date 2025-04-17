#ifndef VOLETPRESENTER_HPP
#define VOLETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class VoletView;

class VoletPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    VoletPresenter(VoletView& v);

    virtual void activate();
    virtual void deactivate();

    virtual ~VoletPresenter() {}

private:
    VoletPresenter();

    VoletView& view;
};

#endif // VOLETPRESENTER_HPP
