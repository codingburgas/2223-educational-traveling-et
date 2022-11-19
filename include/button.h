//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v1.2 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleButton();                             //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2022 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define BUTTON_STYLE_PROPS_COUNT  2

// Custom style name: Button
static const GuiStyleProp ButtonStyleProps[BUTTON_STYLE_PROPS_COUNT] = {
    { 2, 0, 0x000000ff },    // BUTTON_BORDER_COLOR_NORMAL 
    { 2, 2, 0x000000ff },    // BUTTON_TEXT_COLOR_NORMAL 
};

// Style loading function: Button
static void GuiLoadStyleButton(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < BUTTON_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(ButtonStyleProps[i].controlId, ButtonStyleProps[i].propertyId, ButtonStyleProps[i].propertyValue);
    }

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}
