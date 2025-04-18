/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainViewBase::MainViewBase() :
    flexButtonCallback(this, &MainViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    add(image1);

    ScreenAlarme.setBitmaps(Bitmap(BITMAP_ALARME_ID), Bitmap(BITMAP_ALARME_ID));
    ScreenAlarme.setBitmapXY(0, 0);
    ScreenAlarme.setAction(flexButtonCallback);
    ScreenAlarme.setPosition(305, 71, 130, 130);
    add(ScreenAlarme);

    ScreenMeteo.setBitmaps(Bitmap(BITMAP_METEO_ID), Bitmap(BITMAP_METEO_ID));
    ScreenMeteo.setBitmapXY(0, 0);
    ScreenMeteo.setAction(flexButtonCallback);
    ScreenMeteo.setPosition(160, 71, 130, 130);
    add(ScreenMeteo);

    ScreenVolet.setBitmaps(Bitmap(BITMAP_VOLET_ID), Bitmap(BITMAP_VOLET_ID));
    ScreenVolet.setBitmapXY(-50, -50);
    ScreenVolet.setAction(flexButtonCallback);
    ScreenVolet.setPosition(15, 71, 130, 130);
    add(ScreenVolet);

    Titre.setXY(140, 227);
    Titre.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Titre.setLinespacing(0);
    Titre.setTypedText(touchgfx::TypedText(T___SINGLEUSE_44AB));
    add(Titre);
}

MainViewBase::~MainViewBase()
{

}

void MainViewBase::setupScreen()
{

}

void MainViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &ScreenVolet)
    {
        //Interaction1
        //When ScreenVolet clicked change screen to Volet
        //Go to Volet with screen transition towards East
        application().gotoVoletScreenWipeTransitionEast();
    }
    if (&src == &ScreenMeteo)
    {
        //Interaction2
        //When ScreenMeteo clicked change screen to Meteo
        //Go to Meteo with screen transition towards East
        application().gotoMeteoScreenWipeTransitionEast();
    }
    if (&src == &ScreenAlarme)
    {
        //Interaction3
        //When ScreenAlarme clicked change screen to Alarme
        //Go to Alarme with screen transition towards East
        application().gotoAlarmeScreenWipeTransitionEast();
    }
}
