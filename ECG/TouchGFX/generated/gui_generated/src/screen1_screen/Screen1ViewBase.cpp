/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 800, 480);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    dynamicGraph1.setScale(1);
    dynamicGraph1.setPosition(0, 0, 800, 480);
    dynamicGraph1.setGraphAreaMargin(36, 0, 0, 0);
    dynamicGraph1.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph1.setGraphRangeY(-1250, 1250);

    dynamicGraph1MinorXAxisGrid.setScale(1);
    dynamicGraph1MinorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(97, 97, 97));
    dynamicGraph1MinorXAxisGrid.setInterval(20);
    dynamicGraph1MinorXAxisGrid.setLineWidth(1);
    dynamicGraph1MinorXAxisGrid.setMajorGrid(dynamicGraph1MajorXAxisGrid);
    dynamicGraph1.addGraphElement(dynamicGraph1MinorXAxisGrid);

    dynamicGraph1MinorYAxisGrid.setScale(1);
    dynamicGraph1MinorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(97, 97, 97));
    dynamicGraph1MinorYAxisGrid.setInterval(100);
    dynamicGraph1MinorYAxisGrid.setLineWidth(1);
    dynamicGraph1MinorYAxisGrid.setMajorGrid(dynamicGraph1MajorYAxisGrid);
    dynamicGraph1.addGraphElement(dynamicGraph1MinorYAxisGrid);

    dynamicGraph1MajorXAxisGrid.setScale(1);
    dynamicGraph1MajorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(97, 97, 97));
    dynamicGraph1MajorXAxisGrid.setInterval(100);
    dynamicGraph1MajorXAxisGrid.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorXAxisGrid);

    dynamicGraph1MajorYAxisGrid.setScale(1);
    dynamicGraph1MajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(89, 89, 89));
    dynamicGraph1MajorYAxisGrid.setInterval(500);
    dynamicGraph1MajorYAxisGrid.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorYAxisGrid);

    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);

    box3.setPosition(0, -2, 800, 37);
    box3.setColor(touchgfx::Color::getColorFromRGB(219, 219, 219));

    textArea1.setXY(119, 1);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_XRTL));

    textArea2.setXY(624, 426);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1XTZ));

    textArea3.setXY(133, 426);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NFTU));

    textArea4.setXY(459, 3);
    textArea4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea4.setLinespacing(0);
    textArea4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_T06K));

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_ICONS8_TIMEZONE_GLOBE_50_ID));
    scalableImage1.setPosition(425, 3, 34, 32);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_ICONS8_PATIENT_64_ID));
    scalableImage2.setPosition(87, 4, 32, 31);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    scalableImage3.setBitmap(touchgfx::Bitmap(BITMAP_ICONS8_CLOUD_96_ID));
    scalableImage3.setPosition(300, -12, 66, 57);
    scalableImage3.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    scalableImage4.setBitmap(touchgfx::Bitmap(BITMAP_ICONS8_WI_FI_50_ID));
    scalableImage4.setPosition(317, 5, 33, 28);
    scalableImage4.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    scalableImage5.setBitmap(touchgfx::Bitmap(BITMAP_ICONS8_GREEN_CIRCLE_48_ID));
    scalableImage5.setPosition(368, 8, 24, 22);
    scalableImage5.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    scalableImage6.setBitmap(touchgfx::Bitmap(BITMAP_ICONS8_CIRCLE_24_ID));
    scalableImage6.setPosition(369, 8, 24, 24);
    scalableImage6.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    scalableImage7.setBitmap(touchgfx::Bitmap(BITMAP_BATERIA_ID));
    scalableImage7.setPosition(744, 3, 52, 30);
    scalableImage7.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    textArea5.setXY(686, 3);
    textArea5.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5.setLinespacing(0);
    textArea5.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KGA4));

    voltar.setXY(12, 10);
    voltar.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_ICONS_BACK_ARROW_48_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_BACK_ARROW_48_ID));
    voltar.setAction(buttonCallback);

    ConfigExame.setXY(534, 420);
    ConfigExame.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_SETTINGS_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_SETTINGS_32_ID));
    ConfigExame.setIconXY(15, 15);
    ConfigExame.setAction(buttonCallback);

    buttonWithIcon1.setXY(354, 420);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_REFRESH_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_REFRESH_32_ID));
    buttonWithIcon1.setIconXY(15, 16);
    buttonWithIcon1.setAction(buttonCallback);

    textoffset.setXY(414, 431);
    textoffset.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textoffset.setLinespacing(0);
    textoffset.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8O3B));

    buttonNextDeriv.setXY(73, 420);
    buttonNextDeriv.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID));
    buttonNextDeriv.setIconXY(22, 15);
    buttonNextDeriv.setAction(buttonCallback);

    buttoBackDeriv.setXY(10, 420);
    buttoBackDeriv.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID));
    buttoBackDeriv.setIconXY(22, 15);
    buttoBackDeriv.setAction(buttonCallback);

    add(__background);
    add(box1);
    add(dynamicGraph1);
    add(box3);
    add(textArea1);
    add(textArea2);
    add(textArea3);
    add(textArea4);
    add(scalableImage1);
    add(scalableImage2);
    add(scalableImage3);
    add(scalableImage4);
    add(scalableImage5);
    add(scalableImage6);
    add(scalableImage7);
    add(textArea5);
    add(voltar);
    add(ConfigExame);
    add(buttonWithIcon1);
    add(textoffset);
    add(buttonNextDeriv);
    add(buttoBackDeriv);
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &voltar)
    {
        //interationVoltar
        //When voltar clicked change screen to Screen2
        //Go to Screen2 with no screen transition
        application().gotoScreen2ScreenNoTransition();

        //InteractionStopData1
        //When voltar clicked call virtual function
        //Call StopData
        StopData();
    }
    else if (&src == &ConfigExame)
    {
        //interationExameToConfig
        //When ConfigExame clicked change screen to Configuracoes
        //Go to Configuracoes with no screen transition
        application().gotoConfiguracoesScreenNoTransition();

        //InteractionStopData2
        //When ConfigExame clicked call virtual function
        //Call StopData
        StopData();
    }
    else if (&src == &buttonWithIcon1)
    {
        //Interactionescala
        //When buttonWithIcon1 clicked call virtual function
        //Call AjusteEscala
        AjusteEscala();
    }
    else if (&src == &buttonNextDeriv)
    {
        //ProximaDerivacao
        //When buttonNextDeriv clicked call virtual function
        //Call NextDeriv
        NextDeriv();
    }
    else if (&src == &buttoBackDeriv)
    {
        //DerivacaoAnterior
        //When buttoBackDeriv clicked call virtual function
        //Call BackDeriv
        BackDeriv();
    }
}
