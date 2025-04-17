#ifndef VOLETVIEW_HPP
#define VOLETVIEW_HPP

#include <gui_generated/volet_screen/VoletViewBase.hpp>
#include <gui/volet_screen/VoletPresenter.hpp>

class VoletView : public VoletViewBase {
public:
    VoletView();
    virtual ~VoletView() {}

    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void buttonUp1Clicked();
    virtual void buttonDown1Clicked();

};

#endif // VOLETVIEW_HPP
