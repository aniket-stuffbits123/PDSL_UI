#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *home;
    lv_obj_t *setting;
    lv_obj_t *can;
    lv_obj_t *can_logger;
    lv_obj_t *top_panel_home;
    lv_obj_t *label_hp;
    lv_obj_t *label_hp_time;
    lv_obj_t *icon_hp_setting;
    lv_obj_t *button_hp;
    lv_obj_t *icon_hp;
    lv_obj_t *label_hp_button;
    lv_obj_t *button_hp_1;
    lv_obj_t *label_hp_button_1;
    lv_obj_t *icon_hp_1;
    lv_obj_t *button_hp_2;
    lv_obj_t *icon_home_2;
    lv_obj_t *label_home_button_2;
    lv_obj_t *bottom_panel_hp;
    lv_obj_t *label_hp_status;
    lv_obj_t *led_status_can_ch_1;
    lv_obj_t *bottom_panel_hp_1;
    lv_obj_t *label_hp_status_1;
    lv_obj_t *led_status_can_ch_2;
    lv_obj_t *bottom_panel_hp_2;
    lv_obj_t *label_hp_status_2;
    lv_obj_t *led_status_can_ch_3;
    lv_obj_t *top_panel_hp_4;
    lv_obj_t *label_hp_status_3;
    lv_obj_t *led_status_can_ch_4;
    lv_obj_t *label_hp_2;
    lv_obj_t *top_panel_sp;
    lv_obj_t *label_sp;
    lv_obj_t *icon_sp_home;
    lv_obj_t *button_sp;
    lv_obj_t *label_sp_button;
    lv_obj_t *icon_sp;
    lv_obj_t *button_sp_1;
    lv_obj_t *label_sp_button_1;
    lv_obj_t *icon_sp_1;
    lv_obj_t *top_panel_cp;
    lv_obj_t *label_cp;
    lv_obj_t *label_cp_2;
    lv_obj_t *dd_ch_select;
    lv_obj_t *label_cp_3;
    lv_obj_t *dd_bitrate_select;
    lv_obj_t *label_cp_4;
    lv_obj_t *label_cp_5;
    lv_obj_t *dd_mode_select;
    lv_obj_t *icon_cp;
    lv_obj_t *icon_cp_1;
    lv_obj_t *cb_can_fd_enable;
    lv_obj_t *label_cp_6;
    lv_obj_t *cb_can_ch_enable;
    lv_obj_t *panel_canlogger_title;
    lv_obj_t *label_canlogger_title;
    lv_obj_t *iconbutton_canlogger_home;
    lv_obj_t *ta_can_logger_console;
    lv_obj_t *label_can_logger_console;
    lv_obj_t *button_canlogging_start_stop;
    lv_obj_t *label_canlogging_start_stop;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_HOME = 2,
    SCREEN_ID_SETTING = 3,
    SCREEN_ID_CAN = 4,
    SCREEN_ID_CAN_LOGGER = 5,
};

void create_screen_main();
void tick_screen_main();

void create_screen_home();
void tick_screen_home();

void create_screen_setting();
void tick_screen_setting();

void create_screen_can();
void tick_screen_can();

void create_screen_can_logger();
void tick_screen_can_logger();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/