/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef VOLETVIEWBASE_HPP
#define VOLETVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/volet_screen/VoletPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class VoletViewBase : public touchgfx::View<VoletPresenter>
{
public:
    VoletViewBase();
    virtual ~VoletViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void buttonUp1Clicked()
    {
        // Override and implement this function in Volet
    }
    virtual void buttonDown1Clicked()
    {
        // Override and implement this function in Volet
    }
    virtual void buttonUp2Clicked()
    {
        // Override and implement this function in Volet
    }
    virtual void buttonDown2Clicked()
    {
        // Override and implement this function in Volet
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::Button buttonUpVolet1;
    touchgfx::Button buttonUpVolet2;
    touchgfx::Button buttonDownVolet1;
    touchgfx::Button buttonDownVolet2;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea1_1;
    touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger >  RetourHome;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<VoletViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<VoletViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // VOLETVIEWBASE_HPP
