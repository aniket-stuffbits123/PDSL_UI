#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const lv_img_dsc_t img_logo;
extern const lv_img_dsc_t img_logging;
extern const lv_img_dsc_t img_automation;
extern const lv_img_dsc_t img_diagnostic;
extern const lv_img_dsc_t img_setting;
extern const lv_img_dsc_t img_setting_pressed;
extern const lv_img_dsc_t img_home_icon;
extern const lv_img_dsc_t img_home_pressed;
extern const lv_img_dsc_t img_can;
extern const lv_img_dsc_t img_lin;
extern const lv_img_dsc_t img_back;
extern const lv_img_dsc_t img_back_pressed;
extern const lv_img_dsc_t img_save;
extern const lv_img_dsc_t img_save_pressed;

#ifndef EXT_IMG_DESC_T
#define EXT_IMG_DESC_T
typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;
#endif

extern const ext_img_desc_t images[14];


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_IMAGES_H*/