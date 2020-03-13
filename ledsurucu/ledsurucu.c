/*
*ledsurucu.c
*/
#include "ledsurucu.h"

/*Design Functions*/
void ColorChooserScreen(void);
void StaticColorScreen(void);
void ColorChooserInformationScreen(void);
void staticColorButtons(void);
void ledRslider(void);
void ledGslider(void);
void ledBslider(void);
void setNewColorButton(void);
void outGoingColorContainer(void);
void MenuDropList(void);
void information(void);
/*Events Functions*/
static void ledRslider_event_handler(lv_obj_t * obj, lv_event_t event);
static void ledGslider_event_handler(lv_obj_t * obj, lv_event_t event);
static void ledBslider_event_handler(lv_obj_t * obj, lv_event_t event);
static void setNewColorButton_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton0_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton1_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton2_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton3_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton4_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton5_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton6_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton7_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton8_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton9_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton10_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton11_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton12_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton13_event_handler(lv_obj_t * obj, lv_event_t event);
static void staticColorButton14_event_handler(lv_obj_t * obj, lv_event_t event);
static void MenuDropList_event_handler(lv_obj_t * obj, lv_event_t event);
/*Style Functions*/
void ledSliderStyle(void);
void ledButtonStyle(void);
void outGoingColorContainerStyle(void);
void menuDownListStyle(void);
/*Objects*/

lv_obj_t *ledRvalueLabel;
lv_obj_t *ledGvalueLabel;
lv_obj_t *ledBvalueLabel;
lv_obj_t *ledSetColorbtn;
lv_obj_t * ledOutGoingContainer;
/*Style Object*/
static lv_style_t ledSlider_style_bg;
static lv_style_t ledSlider_style_indic;
static lv_style_t ledSlider_style_knob;
static lv_style_t led_Button_style_btn_rel;
static lv_style_t led_Button_style_btn_pr;
static lv_style_t ledOutGoingContainerRelSyle;
static lv_style_t ledOutGoingContainerPrStyle;
static lv_style_t menuDownList_SbStyle;
static lv_style_t menuDownList_SelStyle;
static lv_style_t menuDownList_bgStyle;
/*Variables*/
 uint8_t ledTempRValues = 0;
 uint8_t ledTempGValues = 0;
 uint8_t ledTempBValues = 0;
 uint8_t ledRValues = 0;
 uint8_t ledGValues = 0;
 uint8_t ledBValues = 0;

/*Main Function*/
void ledSurucuMain(void) {
	lv_obj_t * LedControllerGui;
	lv_theme_set_current(lv_theme_mono_init(0, 0));
	LedControllerGui = lv_obj_create(0, 0);
	lv_disp_load_scr(LedControllerGui);//Displayi olu�turur.
	StaticColorScreen();
	MenuDropList();
}
/*Design Functions*/
void StaticColorScreen(void) {

	staticColorButtons();
	outGoingColorContainer();
	setNewColorButton();
	
}
void ColorChooserScreen(void) {

	ledRslider();
	ledGslider();
	ledBslider();
	outGoingColorContainer();
	setNewColorButton();

	
}
void ColorChooserInformationScreen(void) {

	information();	
	outGoingColorContainer();
}
void staticColorButtons(void) {


	lv_obj_t * ledStaticColors[15];
	static lv_style_t ledStaticColorsRelSyle[15];
	static lv_style_t ledStaticColorsPrStyle[15];


	for (uint8_t count = 0; count < 15; count++) {
		ledButtonStyle();
		lv_style_copy(&ledStaticColorsRelSyle[count], &led_Button_style_btn_rel);
		lv_style_copy(&ledStaticColorsPrStyle[count], &led_Button_style_btn_pr);
		switch (count)
		{
		case 0:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(255, 0, 0);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(255, 0, 0);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(255, 0, 0);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(255, 0, 0);
			break;
		case 1:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(128, 0, 0);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(128, 0, 0);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(128, 0, 0);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(128, 0, 0);
			break;
		case 2:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(128, 0, 128);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(128, 0, 128);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(128, 0, 128);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(128, 0, 128);
			break;
		case 3:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(255, 0, 255);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(255, 0, 255);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(255, 0, 255);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(255, 0, 255);
			break;
		case 4:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(128, 128, 128);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(128, 128, 128);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(128, 128, 128);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(128, 128, 128);
			break;
		case 5:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(0, 128, 0);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(0, 128, 0);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(0, 128, 0);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(0, 128, 0);
			break;
		case 6:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(128, 128, 0);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(128, 128, 0);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(128, 128, 0);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(128, 128, 0);
			break;
		case 7:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(0, 128, 128);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(0, 128, 128);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(0, 128, 128);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(0, 128, 128);
			break;
		case 8:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(0, 255, 0);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(0, 255, 0);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(0, 255, 0);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(0, 255, 0);
			break;
		case 9:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(192, 192, 192);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(192, 192, 192);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(192, 192, 192);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(192, 192, 192);
			break;
		case 10:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(0, 0, 255);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(0, 0, 255);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(0, 0, 255);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(0, 0, 255);
			break;
		case 11:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(0, 0, 128);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(0, 0, 128);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(0, 0, 128);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(0, 0, 128);
			break;
		case 12:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(0, 255, 255);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(0, 255, 255);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(0, 255, 255);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(0, 255, 255);
			break;
		case 13:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(255, 255, 0);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(255, 255, 0);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(255, 255, 0);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(255, 255, 0);
			break;
		case 14:
			ledStaticColorsRelSyle[count].body.main_color = lv_color_make(255, 255, 255);
			ledStaticColorsRelSyle[count].body.grad_color = lv_color_make(255, 255, 255);
			ledStaticColorsPrStyle[count].body.main_color = lv_color_make(255, 255, 255);
			ledStaticColorsPrStyle[count].body.grad_color = lv_color_make(255, 255, 255);
			break;
		default:
			break;
		}
	}
	for (uint8_t count = 0; count < 15; count++) {

		ledStaticColors[count] = lv_btn_create(lv_scr_act(), NULL);
		lv_obj_set_size(ledStaticColors[count], 35, 35);

		if (count < 5) {
			lv_obj_align(ledStaticColors[count], NULL, LV_ALIGN_CENTER, -104 + (50 * count), -68);

		}
		else if (count >= 5 && count < 10) {
			lv_obj_align(ledStaticColors[count], NULL, LV_ALIGN_CENTER, -104 + (50 * (count - 5)), -68 + 50);

		}
		else {
			lv_obj_align(ledStaticColors[count], NULL, LV_ALIGN_CENTER, -104 + (50 * (count - 10)), -68 + 100);

		}
		lv_btn_set_style(ledStaticColors[count], LV_BTN_STYLE_REL, &ledStaticColorsRelSyle[count]);
		lv_btn_set_style(ledStaticColors[count], LV_BTN_STYLE_PR, &ledStaticColorsPrStyle[count]);

	}
	lv_obj_set_event_cb(ledStaticColors[0], staticColorButton0_event_handler);
	lv_obj_set_event_cb(ledStaticColors[1], staticColorButton1_event_handler);
	lv_obj_set_event_cb(ledStaticColors[2], staticColorButton2_event_handler);
	lv_obj_set_event_cb(ledStaticColors[3], staticColorButton3_event_handler);
	lv_obj_set_event_cb(ledStaticColors[4], staticColorButton4_event_handler);
	lv_obj_set_event_cb(ledStaticColors[5], staticColorButton5_event_handler);
	lv_obj_set_event_cb(ledStaticColors[6], staticColorButton6_event_handler);
	lv_obj_set_event_cb(ledStaticColors[7], staticColorButton7_event_handler);
	lv_obj_set_event_cb(ledStaticColors[8], staticColorButton8_event_handler);
	lv_obj_set_event_cb(ledStaticColors[9], staticColorButton9_event_handler);
	lv_obj_set_event_cb(ledStaticColors[10], staticColorButton10_event_handler);
	lv_obj_set_event_cb(ledStaticColors[11], staticColorButton11_event_handler);
	lv_obj_set_event_cb(ledStaticColors[12], staticColorButton12_event_handler);
	lv_obj_set_event_cb(ledStaticColors[13], staticColorButton13_event_handler);
	lv_obj_set_event_cb(ledStaticColors[14], staticColorButton14_event_handler);


}
void ledRslider(void) {
	ledSliderStyle();
	static lv_style_t ledSlider_Rstyle_indic;
	lv_style_copy(&ledSlider_Rstyle_indic, &ledSlider_style_indic);
	ledSlider_Rstyle_indic.body.main_color = lv_color_make(255, 0, 0);
	ledSlider_Rstyle_indic.body.grad_color = lv_color_make(255, 0, 0);
	ledSlider_Rstyle_indic.body.shadow.color = ledSlider_Rstyle_indic.body.main_color;
	ledSlider_Rstyle_indic.text.color = lv_color_make(255, 0, 0);
	lv_obj_t * slider = lv_slider_create(lv_scr_act(), NULL);
	lv_slider_set_range(slider, 0, 255);
	lv_slider_set_value(slider, ledTempRValues, LV_ANIM_OFF);
	lv_slider_set_style(slider, LV_SLIDER_STYLE_BG, &ledSlider_style_bg);
	lv_slider_set_style(slider, LV_SLIDER_STYLE_INDIC, &ledSlider_Rstyle_indic);
	lv_slider_set_style(slider, LV_SLIDER_STYLE_KNOB, &ledSlider_style_knob);
	lv_obj_align(slider, NULL, LV_ALIGN_CENTER, -15, -50);
	lv_obj_set_event_cb(slider, ledRslider_event_handler);

	ledRvalueLabel = lv_label_create(lv_scr_act(), NULL);
	lv_label_set_style(ledRvalueLabel,LV_LABEL_STYLE_MAIN,&ledSlider_Rstyle_indic);
	static char subSliderbuf[4];
	snprintf(subSliderbuf, 4, "%d", ledTempRValues);
	lv_label_set_text(ledRvalueLabel, subSliderbuf);
	lv_obj_set_auto_realign(ledRvalueLabel, true);
	lv_obj_align(ledRvalueLabel, NULL, LV_ALIGN_CENTER, 113, -50);

}
void ledGslider(void) {
	ledSliderStyle();
	static lv_style_t ledSlider_Gstyle_indic;
	lv_style_copy(&ledSlider_Gstyle_indic, &ledSlider_style_indic);
	ledSlider_Gstyle_indic.body.main_color = lv_color_make(0,255, 0);
	ledSlider_Gstyle_indic.body.grad_color = lv_color_make(0, 255, 0);
	ledSlider_Gstyle_indic.body.shadow.color = ledSlider_Gstyle_indic.body.main_color;
	ledSlider_Gstyle_indic.text.color = lv_color_make(0, 255, 0);
	lv_obj_t * slider = lv_slider_create(lv_scr_act(), NULL);
	lv_slider_set_value(slider, ledTempGValues, LV_ANIM_OFF);
	lv_slider_set_range(slider, 0, 255);
	lv_slider_set_style(slider, LV_SLIDER_STYLE_BG, &ledSlider_style_bg);
	lv_slider_set_style(slider, LV_SLIDER_STYLE_INDIC, &ledSlider_Gstyle_indic);
	lv_slider_set_style(slider, LV_SLIDER_STYLE_KNOB, &ledSlider_style_knob);
	lv_obj_align(slider, NULL, LV_ALIGN_CENTER, -15, 0);
	lv_obj_set_event_cb(slider, ledGslider_event_handler);


	ledGvalueLabel = lv_label_create(lv_scr_act(), NULL);
	lv_label_set_style(ledGvalueLabel, LV_LABEL_STYLE_MAIN, &ledSlider_Gstyle_indic);
	static char subSliderbuf[4];
	snprintf(subSliderbuf, 4, "%d", ledTempGValues);
	lv_label_set_text(ledGvalueLabel, subSliderbuf);
	lv_obj_set_auto_realign(ledGvalueLabel, true);
	lv_obj_align(ledGvalueLabel, NULL, LV_ALIGN_CENTER, 113, 0);
}
void ledBslider(void) {
	ledSliderStyle();
	ledSlider_style_indic.body.main_color = lv_color_make(0, 0, 255);
	ledSlider_style_indic.body.grad_color = lv_color_make(0, 0, 255);
	ledSlider_style_indic.body.shadow.color = ledSlider_style_indic.body.main_color;

	lv_obj_t * slider = lv_slider_create(lv_scr_act(), NULL);
	lv_slider_set_value(slider, ledTempBValues, LV_ANIM_OFF);
	lv_slider_set_range(slider, 0, 255);
	lv_slider_set_style(slider, LV_SLIDER_STYLE_BG, &ledSlider_style_bg);
	lv_slider_set_style(slider, LV_SLIDER_STYLE_INDIC, &ledSlider_style_indic);
	lv_slider_set_style(slider, LV_SLIDER_STYLE_KNOB, &ledSlider_style_knob);
	lv_obj_align(slider, NULL, LV_ALIGN_CENTER, -15, 50);
	lv_obj_set_event_cb(slider, ledBslider_event_handler);


	ledBvalueLabel = lv_label_create(lv_scr_act(), NULL);
	lv_label_set_style(ledBvalueLabel, LV_LABEL_STYLE_MAIN, &ledSlider_style_indic);
	static char subSliderbuf[4];
	snprintf(subSliderbuf, 4, "%d", ledTempBValues);
	lv_label_set_text(ledBvalueLabel, subSliderbuf);
	lv_obj_set_auto_realign(ledBvalueLabel, true);
	lv_obj_align(ledBvalueLabel, NULL, LV_ALIGN_CENTER, 113, 50);
}
void setNewColorButton(void) {
	
	ledButtonStyle();

	ledSetColorbtn = lv_btn_create(lv_scr_act(), NULL);
	lv_obj_align(ledSetColorbtn, NULL, LV_ALIGN_CENTER, 0, 110);
	lv_obj_set_size(ledSetColorbtn, 70, 35);
	lv_obj_set_event_cb(ledSetColorbtn, setNewColorButton_event_handler);

	lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
	lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);

	lv_obj_t * label = lv_label_create(ledSetColorbtn, NULL);
	lv_label_set_text(label, "Rengi Ata");
}
void outGoingColorContainer(void) {
	outGoingColorContainerStyle();
	ledOutGoingContainer = lv_btn_create(lv_scr_act(), NULL);
	lv_obj_set_size(ledOutGoingContainer, 50, 25);
	lv_obj_align(ledOutGoingContainer, NULL, LV_ALIGN_CENTER, 100, -120);
	lv_btn_set_style(ledOutGoingContainer, LV_BTN_STYLE_REL, &ledOutGoingContainerRelSyle);
	lv_btn_set_style(ledOutGoingContainer, LV_BTN_STYLE_PR, &ledOutGoingContainerPrStyle);

	lv_obj_t * label = lv_label_create(ledOutGoingContainer, NULL);
	lv_label_set_text(label, "Renk");

}
void MenuDropList(void) {
	menuDownListStyle();
	lv_obj_t * ddlist = lv_ddlist_create(lv_scr_act(), NULL);
	lv_ddlist_set_options(ddlist, "Statik Renkler\n"
		"Renk Olusturucu\n"
		"Hakkinda");
	lv_ddlist_set_draw_arrow(ddlist, true);
	lv_ddlist_set_style(ddlist, LV_DDLIST_STYLE_SB, &menuDownList_SbStyle);
	lv_ddlist_set_style(ddlist, LV_DDLIST_STYLE_BG, &menuDownList_bgStyle);
	lv_ddlist_set_style(ddlist, LV_DDLIST_STYLE_SEL, &menuDownList_SelStyle);
	lv_obj_set_size(ddlist, 75, 25);
	lv_obj_align(ddlist, NULL, LV_ALIGN_CENTER, -45, -120);
	lv_obj_set_event_cb(ddlist, MenuDropList_event_handler);
}
void information(void) {
	lv_obj_t * Information = lv_label_create(lv_scr_act(), NULL);
	lv_label_set_recolor(Information, true);
	lv_label_set_text(Information, "Bu grafik arayuz Aydinlatma Teknolojileri ve Proje \nDersi icin; #00bfff Neset AYDIN#"
		" tarafindan gelistirildi." "\nStatik Renkler Sayfasindan Mevcut Renklerle ve \nRenk Olusturucu Sayfasinda kendi renklerinizle"
		"\nledleri kontrol edebilirsiniz.");
	lv_obj_set_width(Information, 150);
	lv_obj_align(Information, NULL, LV_ALIGN_CENTER, 0, 0);
}
/*Events Functions*/
static void ledRslider_event_handler(lv_obj_t * obj, lv_event_t event)
{
	ledButtonStyle();
	if (event == LV_EVENT_VALUE_CHANGED) {
		printf("R Value: %d\n", lv_slider_get_value(obj));
		ledTempRValues = lv_slider_get_value(obj);
		static char subSliderbuf[4];
		snprintf(subSliderbuf, 4, "%u", lv_slider_get_value(obj));
		lv_label_set_text(ledRvalueLabel, subSliderbuf);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
	}
}
static void ledGslider_event_handler(lv_obj_t * obj, lv_event_t event)
{
	ledButtonStyle();
	if (event == LV_EVENT_VALUE_CHANGED) {
		printf("G Value: %d\n", lv_slider_get_value(obj));
		ledTempGValues = lv_slider_get_value(obj);
		static char subSliderbuf[4];
		snprintf(subSliderbuf, 4, "%u", lv_slider_get_value(obj));
		lv_label_set_text(ledGvalueLabel, subSliderbuf);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
	}
}
static void ledBslider_event_handler(lv_obj_t * obj, lv_event_t event)
{
	ledButtonStyle();
	if (event == LV_EVENT_VALUE_CHANGED) {
		printf("B Value: %d\n", lv_slider_get_value(obj));
		ledTempBValues = lv_slider_get_value(obj);
		static char subSliderbuf[4];
		snprintf(subSliderbuf, 4, "%u", lv_slider_get_value(obj));
		lv_label_set_text(ledBvalueLabel, subSliderbuf);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
	}
}
static void setNewColorButton_event_handler(lv_obj_t * obj, lv_event_t event)
{
	outGoingColorContainerStyle();
	if (event == LV_EVENT_CLICKED) {
		ledRValues = ledTempRValues;
		ledGValues = ledTempGValues;
		ledBValues = ledTempBValues;
		lv_btn_set_style(ledOutGoingContainer, LV_BTN_STYLE_REL, &ledOutGoingContainerRelSyle);
		lv_btn_set_style(ledOutGoingContainer, LV_BTN_STYLE_PR, &ledOutGoingContainerPrStyle);
	}
}
static void staticColorButton0_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		ledTempRValues = 255;
		ledTempGValues = 0;
		ledTempBValues = 0;
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
	}
	
}
static void staticColorButton1_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 128;
		ledTempGValues = 0;
		ledTempBValues = 0;
	}

}
static void staticColorButton2_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 128;
		ledTempGValues = 0;
		ledTempBValues = 128;
	}

}
static void staticColorButton3_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 255;
		ledTempGValues = 0;
		ledTempBValues = 255;
	}

}
static void staticColorButton4_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 128;
		ledTempGValues = 128;
		ledTempBValues = 128;
	}

}
static void staticColorButton5_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 0;
		ledTempGValues = 128;
		ledTempBValues = 0;
	}

}
static void staticColorButton6_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 128;
		ledTempGValues = 128;
		ledTempBValues = 0;
	}

}
static void staticColorButton7_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 0;
		ledTempGValues = 128;
		ledTempBValues = 128;
	}

}
static void staticColorButton8_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 0;
		ledTempGValues = 255;
		ledTempBValues = 0;
	}

}
static void staticColorButton9_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 192;
		ledTempGValues = 192;
		ledTempBValues = 192;
	}

}
static void staticColorButton10_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 0;
		ledTempGValues = 0;
		ledTempBValues = 255;
	}

}
static void staticColorButton11_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 0;
		ledTempGValues = 0;
		ledTempBValues = 128;
	}

}
static void staticColorButton12_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 0;
		ledTempGValues = 255;
		ledTempBValues = 255;
	}

}
static void staticColorButton13_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 255;
		ledTempGValues = 255;
		ledTempBValues = 0;
	}

}
static void staticColorButton14_event_handler(lv_obj_t * obj, lv_event_t event)
{
		ledButtonStyle();
	if (event == LV_EVENT_CLICKED) {
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_REL, &led_Button_style_btn_rel);
		lv_btn_set_style(ledSetColorbtn, LV_BTN_STYLE_PR, &led_Button_style_btn_pr);
		ledTempRValues = 255;
		ledTempGValues = 255;
		ledTempBValues = 255;
	}

}
static void MenuDropList_event_handler(lv_obj_t * obj, lv_event_t event)
{
	if (event == LV_EVENT_VALUE_CHANGED) {
		char buf[16];
		lv_ddlist_get_selected_str(obj, buf, sizeof(buf));
		if (0 == strcmp("Statik Renkler", buf)) {
			lv_obj_clean(lv_scr_act());
			StaticColorScreen();
			MenuDropList();
		}
		else if (0 == strcmp("Renk Olusturucu", buf)) {
			lv_obj_clean(lv_scr_act());
			ColorChooserScreen();
			MenuDropList();
		}
		else if (0 == strcmp("Hakkinda", buf)) {
			lv_obj_clean(lv_scr_act());
			ColorChooserInformationScreen();
			MenuDropList();
		}
	}
}
/*Style Functions*/
void ledSliderStyle(void) {

	lv_style_copy(&ledSlider_style_bg, &lv_style_pretty);
	ledSlider_style_bg.body.main_color = lv_color_hsv_to_rgb(0, 11, 18);
	ledSlider_style_bg.body.grad_color = lv_color_hsv_to_rgb(0, 11, 18);
	ledSlider_style_bg.body.radius = LV_RADIUS_CIRCLE;
	ledSlider_style_bg.body.border.color = LV_COLOR_WHITE;

	lv_style_copy(&ledSlider_style_indic, &lv_style_pretty_color);
	ledSlider_style_indic.body.radius = LV_RADIUS_CIRCLE;
	ledSlider_style_indic.body.shadow.width = 8;
	ledSlider_style_indic.body.main_color = lv_color_make(0, 191, 255);
	ledSlider_style_indic.body.grad_color = lv_color_hex3(0x00b2ee);
	ledSlider_style_indic.body.shadow.color = ledSlider_style_indic.body.main_color;
	ledSlider_style_indic.body.padding.left = 3;
	ledSlider_style_indic.body.padding.right = 3;
	ledSlider_style_indic.body.padding.top = 3;
	ledSlider_style_indic.body.padding.bottom = 3;
	ledSlider_style_indic.text.color = lv_color_make(0, 0, 255);

	lv_style_copy(&ledSlider_style_knob, &lv_style_pretty);
	ledSlider_style_knob.body.radius = LV_RADIUS_CIRCLE;
	ledSlider_style_knob.body.opa = LV_OPA_70;
	ledSlider_style_knob.body.padding.top = 10;
	ledSlider_style_knob.body.padding.bottom = 10;
}
void ledButtonStyle(void) {

	lv_style_copy(&led_Button_style_btn_rel, &lv_style_plain);         /*Initialize from a built-in style*/
	led_Button_style_btn_rel.body.border.color = lv_color_hex3(0x00bfff);
	led_Button_style_btn_rel.body.border.width = 1;
	led_Button_style_btn_rel.body.main_color = lv_color_make(ledTempRValues, ledTempGValues, ledTempBValues);
	led_Button_style_btn_rel.body.grad_color = lv_color_make(ledTempRValues, ledTempGValues, ledTempBValues);
	led_Button_style_btn_rel.body.shadow.width = 4;
	led_Button_style_btn_rel.body.shadow.type = LV_SHADOW_BOTTOM;
	led_Button_style_btn_rel.body.radius = LV_RADIUS_CIRCLE;
	led_Button_style_btn_rel.text.font = &lv_font_roboto_16;
	led_Button_style_btn_rel.text.color = lv_color_hex3(0x000);


	lv_style_copy(&led_Button_style_btn_pr, &led_Button_style_btn_rel);
	led_Button_style_btn_pr.body.border.color = lv_color_hex3(0x00bfff);
	led_Button_style_btn_pr.body.main_color = lv_color_make(ledTempRValues, ledTempGValues, ledTempBValues);
	led_Button_style_btn_pr.body.grad_color = lv_color_make(ledTempRValues, ledTempGValues, ledTempBValues);
	led_Button_style_btn_pr.body.shadow.width = 2;
	led_Button_style_btn_pr.text.font = &lv_font_roboto_16;
	led_Button_style_btn_pr.text.color = lv_color_hex3(0x000);

	if (ledTempRValues < 128 && ledTempGValues < 128 && ledTempBValues < 128) {
		led_Button_style_btn_rel.text.color = lv_color_hex3(0xfff);
		led_Button_style_btn_pr.text.color = lv_color_hex3(0xfff);
	}
}
void outGoingColorContainerStyle(void) {
	ledButtonStyle();

	lv_style_copy(&ledOutGoingContainerRelSyle, &led_Button_style_btn_rel);
	lv_style_copy(&ledOutGoingContainerPrStyle, &led_Button_style_btn_pr);
	ledOutGoingContainerRelSyle.body.main_color = lv_color_make(ledRValues, ledGValues, ledBValues);
	ledOutGoingContainerRelSyle.body.grad_color = lv_color_make(ledRValues, ledGValues, ledBValues);
	ledOutGoingContainerPrStyle.body.main_color = lv_color_make(ledRValues, ledGValues, ledBValues);
	ledOutGoingContainerPrStyle.body.grad_color = lv_color_make(ledRValues, ledGValues, ledBValues);
}
void menuDownListStyle(void) {



	lv_style_copy(&menuDownList_SbStyle, &lv_style_plain);
	lv_style_copy(&menuDownList_SelStyle, &lv_style_plain);
	lv_style_copy(&menuDownList_bgStyle, &lv_style_plain);


	menuDownList_SbStyle.body.main_color = lv_color_make(0, 191, 255);
	menuDownList_SbStyle.body.grad_color = lv_color_make(0, 191, 255);
	menuDownList_SbStyle.body.border.width = 0;
	menuDownList_SbStyle.body.padding.inner = 3;
	menuDownList_SbStyle.body.padding.left = 0;
	menuDownList_SbStyle.body.padding.right = 0;
	menuDownList_SbStyle.body.padding.top = 0;
	menuDownList_SbStyle.body.padding.bottom = 0;
	menuDownList_SbStyle.body.radius = 3;
	menuDownList_SbStyle.body.opa = LV_OPA_COVER;

	menuDownList_bgStyle.text.line_space = 3;
	menuDownList_bgStyle.body.padding.top = LV_DPI / 8;
	menuDownList_bgStyle.body.padding.bottom = LV_DPI / 8;
	menuDownList_bgStyle.body.padding.left = LV_DPI / 8;
	menuDownList_bgStyle.body.padding.right = LV_DPI / 8;
	menuDownList_bgStyle.body.radius = 3;


	menuDownList_SelStyle.body.main_color = lv_color_make(0, 191, 255);
	menuDownList_SelStyle.body.grad_color = lv_color_make(0, 191, 255);
	menuDownList_SelStyle.body.radius = 0;


}
/*Set Functions*/
void ledRgbValuesSet(uint8_t *R, uint8_t *G, uint8_t *B) {
	*R=ledRValues;
	*G=ledGValues;
	*B=ledBValues;
}
