/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/configuracoes_screen/ConfiguracoesViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ConfiguracoesViewBase::ConfiguracoesViewBase() :
    buttonCallback(this, &ConfiguracoesViewBase::buttonCallbackHandler),
    radioButtonSelectedCallback(this, &ConfiguracoesViewBase::radioButtonSelectedCallbackHandler)
{

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 800, 480);
    box1.setColor(touchgfx::Color::getColorFromRGB(20, 61, 89));

    voltar.setXY(12, 10);
    voltar.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_ICONS_BACK_ARROW_48_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_BACK_ARROW_48_ID));
    voltar.setAction(buttonCallback);

    FreqAmostragem.setXY(27, 84);
    FreqAmostragem.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    FreqAmostragem.setLinespacing(0);
    FreqAmostragem.setTypedText(touchgfx::TypedText(T___SINGLEUSE_UBY0));

    barra_divisoria.setPosition(26, 80, 775, 2);
    barra_divisoria.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    textArea2.setXY(252, 98);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1JPQ));

    textArea2_1.setXY(383, 98);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_96UY));

    textArea2_1_1.setXY(514, 98);
    textArea2_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_1_1.setLinespacing(0);
    textArea2_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_OWUG));

    textArea2_1_1_1.setXY(645, 98);
    textArea2_1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_1_1_1.setLinespacing(0);
    textArea2_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9M2J));

    textArea1_1.setXY(60, 147);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_G1L5));

    barra_divisoria_1.setPosition(27, 143, 775, 2);
    barra_divisoria_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    textArea1_1_1.setXY(50, 206);
    textArea1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1_1.setLinespacing(0);
    textArea1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_5AGV));

    barra_divisoria_1_1.setPosition(26, 203, 775, 2);
    barra_divisoria_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    radioButton1kSPS.setXY(217, 94);
    radioButton1kSPS.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButton1kSPS.setSelected(false);
    radioButton1kSPS.setDeselectionEnabled(false);

    radioButton500SPS.setXY(348, 94);
    radioButton500SPS.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButton500SPS.setSelected(false);
    radioButton500SPS.setDeselectionEnabled(false);

    radioButton250SPS.setXY(479, 94);
    radioButton250SPS.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButton250SPS.setSelected(false);
    radioButton250SPS.setDeselectionEnabled(false);

    radioButton125SPS.setXY(610, 94);
    radioButton125SPS.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButton125SPS.setSelected(false);
    radioButton125SPS.setDeselectionEnabled(false);

    textArea3.setXY(255, 0);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_72N9));

    ConfigtoExame.setXY(719, 399);
    ConfigtoExame.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_PLAY_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_PLAY_32_ID));
    ConfigtoExame.setIconXY(20, 15);
    ConfigtoExame.setAction(buttonCallback);

    radioButtonGain12.setXY(207, 157);
    radioButtonGain12.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButtonGain12.setSelected(false);
    radioButtonGain12.setDeselectionEnabled(false);

    radioButtonGain8.setXY(286, 157);
    radioButtonGain8.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButtonGain8.setSelected(false);
    radioButtonGain8.setDeselectionEnabled(false);

    radioButtonGain6.setXY(368, 157);
    radioButtonGain6.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButtonGain6.setSelected(false);
    radioButtonGain6.setDeselectionEnabled(false);

    radioButtonGain4.setXY(450, 157);
    radioButtonGain4.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButtonGain4.setSelected(false);
    radioButtonGain4.setDeselectionEnabled(false);

    radioButtonGain3.setXY(532, 157);
    radioButtonGain3.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButtonGain3.setSelected(false);
    radioButtonGain3.setDeselectionEnabled(false);

    radioButtonGain2.setXY(614, 157);
    radioButtonGain2.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButtonGain2.setSelected(false);
    radioButtonGain2.setDeselectionEnabled(false);

    radioButtonGain1.setXY(696, 157);
    radioButtonGain1.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButtonGain1.setSelected(false);
    radioButtonGain1.setDeselectionEnabled(false);

    textArea2_2.setXY(241, 161);
    textArea2_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_2.setLinespacing(0);
    textArea2_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_2GRA));

    textArea2_2_1.setXY(320, 161);
    textArea2_2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_2_1.setLinespacing(0);
    textArea2_2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BQ92));

    textArea2_2_1_1.setXY(403, 161);
    textArea2_2_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_2_1_1.setLinespacing(0);
    textArea2_2_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_2APE));

    textArea2_2_1_1_1.setXY(484, 161);
    textArea2_2_1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_2_1_1_1.setLinespacing(0);
    textArea2_2_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GB6Y));

    textArea2_2_1_1_1_1.setXY(566, 161);
    textArea2_2_1_1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_2_1_1_1_1.setLinespacing(0);
    textArea2_2_1_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_HEVB));

    textArea2_2_1_1_1_1_1.setXY(648, 161);
    textArea2_2_1_1_1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_2_1_1_1_1_1.setLinespacing(0);
    textArea2_2_1_1_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4XY9));

    textArea2_2_1_1_1_1_1_1.setXY(730, 161);
    textArea2_2_1_1_1_1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_2_1_1_1_1_1_1.setLinespacing(0);
    textArea2_2_1_1_1_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6667));

    radioButtonModoNormal.setXY(207, 216);
    radioButtonModoNormal.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButtonModoNormal.setSelected(false);
    radioButtonModoNormal.setDeselectionEnabled(false);

    radioButtonModoTeste.setXY(398, 216);
    radioButtonModoTeste.setBitmaps(touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_UNSELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID), touchgfx::Bitmap(BITMAP_RADIOBUTTON_SELECTED_RELEASED_ID));
    radioButtonModoTeste.setSelected(false);
    radioButtonModoTeste.setDeselectionEnabled(false);

    textArea2_3.setXY(243, 220);
    textArea2_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_3.setLinespacing(0);
    textArea2_3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZYMX));

    textArea2_3_1.setXY(437, 220);
    textArea2_3_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_3_1.setLinespacing(0);
    textArea2_3_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KWMU));

    add(__background);
    add(box1);
    add(voltar);
    add(FreqAmostragem);
    add(barra_divisoria);
    add(textArea2);
    add(textArea2_1);
    add(textArea2_1_1);
    add(textArea2_1_1_1);
    add(textArea1_1);
    add(barra_divisoria_1);
    add(textArea1_1_1);
    add(barra_divisoria_1_1);
    add(radioButton1kSPS);
    add(radioButton500SPS);
    add(radioButton250SPS);
    add(radioButton125SPS);
    add(textArea3);
    add(ConfigtoExame);
    add(radioButtonGain12);
    add(radioButtonGain8);
    add(radioButtonGain6);
    add(radioButtonGain4);
    add(radioButtonGain3);
    add(radioButtonGain2);
    add(radioButtonGain1);
    add(textArea2_2);
    add(textArea2_2_1);
    add(textArea2_2_1_1);
    add(textArea2_2_1_1_1);
    add(textArea2_2_1_1_1_1);
    add(textArea2_2_1_1_1_1_1);
    add(textArea2_2_1_1_1_1_1_1);
    add(radioButtonModoNormal);
    add(radioButtonModoTeste);
    add(textArea2_3);
    add(textArea2_3_1);
    radioButtonGroupFreqAmost.add(radioButton1kSPS);
    radioButtonGroupFreqAmost.add(radioButton500SPS);
    radioButtonGroupFreqAmost.add(radioButton250SPS);
    radioButtonGroupFreqAmost.add(radioButton125SPS);
    radioButtonGroupGain.add(radioButtonGain12);
    radioButtonGroupGain.add(radioButtonGain8);
    radioButtonGroupGain.add(radioButtonGain6);
    radioButtonGroupGain.add(radioButtonGain4);
    radioButtonGroupGain.add(radioButtonGain3);
    radioButtonGroupGain.add(radioButtonGain2);
    radioButtonGroupGain.add(radioButtonGain1);
    radioButtonGroupGain.add(radioButtonModoNormal);
    radioButtonGroupGain.add(radioButtonModoTeste);
    radioButtonGroupFreqAmost.setRadioButtonSelectedHandler(radioButtonSelectedCallback);
    radioButtonGroupGain.setRadioButtonSelectedHandler(radioButtonSelectedCallback);
}

void ConfiguracoesViewBase::setupScreen()
{

}

void ConfiguracoesViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &voltar)
    {
        //InteractionVoltar
        //When voltar clicked change screen to MENU
        //Go to MENU with no screen transition
        application().gotoMENUScreenNoTransition();
    }
    else if (&src == &ConfigtoExame)
    {
        //InteractionConfigToExame
        //When ConfigtoExame clicked change screen to Screen1
        //Go to Screen1 with no screen transition
        application().gotoScreen1ScreenNoTransition();

        //InteractionStartRDataC
        //When ConfigtoExame clicked call virtual function
        //Call StartRDataC
        StartRDataC();
    }
}

void ConfiguracoesViewBase::radioButtonSelectedCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &radioButton1kSPS)
    {
        //Interaction1kSPS
        //When radioButton1kSPS selected call virtual function
        //Call Set1kSPS
        Set1kSPS();
    }
    else if (&src == &radioButton500SPS)
    {
        //Interaction500SPS
        //When radioButton500SPS selected call virtual function
        //Call Set500SPS
        Set500SPS();
    }
    else if (&src == &radioButton250SPS)
    {
        //Interaction250SPS
        //When radioButton250SPS selected call virtual function
        //Call Set250SPS
        Set250SPS();
    }
    else if (&src == &radioButton125SPS)
    {
        //Interaction125SPS
        //When radioButton125SPS selected call virtual function
        //Call Set125SPS
        Set125SPS();
    }
    else if (&src == &radioButtonGain12)
    {
        //InteractionGain12
        //When radioButtonGain12 selected call virtual function
        //Call SetGain12
        SetGain12();
    }
    else if (&src == &radioButtonGain8)
    {
        //InteractionGain8
        //When radioButtonGain8 selected call virtual function
        //Call SetGain8
        SetGain8();
    }
    else if (&src == &radioButtonGain6)
    {
        //InteractionGain6
        //When radioButtonGain6 selected call virtual function
        //Call SetGain6
        SetGain6();
    }
    else if (&src == &radioButtonGain4)
    {
        //InteractionGain4
        //When radioButtonGain4 selected call virtual function
        //Call SetGain4
        SetGain4();
    }
    else if (&src == &radioButtonGain3)
    {
        //InteractionGain3
        //When radioButtonGain3 selected call virtual function
        //Call SetGain4
        SetGain4();
    }
    else if (&src == &radioButtonGain2)
    {
        //InteractionGain2
        //When radioButtonGain2 selected call virtual function
        //Call SetGain2
        SetGain2();
    }
    else if (&src == &radioButtonGain1)
    {
        //InteractionGain1
        //When radioButtonGain1 selected call virtual function
        //Call SetGain1
        SetGain1();
    }
    else if (&src == &radioButtonModoNormal)
    {
        //SetModoNormal
        //When radioButtonModoNormal selected call virtual function
        //Call SetModoNormal
        SetModoNormal();
    }
    else if (&src == &radioButtonModoTeste)
    {
        //SetModoTeste
        //When radioButtonModoTeste selected call virtual function
        //Call SetModoTeste
        SetModoTeste();
    }
}
