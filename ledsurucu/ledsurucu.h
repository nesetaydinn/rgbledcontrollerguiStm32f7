/*
*ledsurucu.h
*/
#ifndef RGBLEDSURUCU
#define RGBLEDSURUCU
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "../lvgl/lvgl.h"
#endif

	void ledSurucuMain(void);
	void ledRgbValuesSet(uint8_t *R, uint8_t *G, uint8_t *B);
#ifdef __cplusplus
}
#endif // __cplusplus


#endif // !RGBLEDSURUCU


