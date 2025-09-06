#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *can_home;
    lv_obj_t *setting;
    lv_obj_t *can_settings;
    lv_obj_t *can_logger;
    lv_obj_t *lin_home;
    lv_obj_t *lin_settings;
    lv_obj_t *lin_logger;
    lv_obj_t *top_panel_can_home;
    lv_obj_t *can_page_lebel;
    lv_obj_t *can_page_time;
    lv_obj_t *can_page_settings;
    lv_obj_t *can_logger_panel;
    lv_obj_t *icon_hp;
    lv_obj_t *label_hp_button;
    lv_obj_t *can_automation_panel;
    lv_obj_t *label_hp_button_1;
    lv_obj_t *icon_hp_1;
    lv_obj_t *can_diagnostic_panel;
    lv_obj_t *icon_home_2;
    lv_obj_t *label_home_button_2;
    lv_obj_t *can1_status_panel;
    lv_obj_t *label_hp_status;
    lv_obj_t *led_status_can_ch_1;
    lv_obj_t *can2_status_panel;
    lv_obj_t *label_hp_status_1;
    lv_obj_t *led_status_can_ch_2;
    lv_obj_t *can3_status_panel;
    lv_obj_t *label_hp_status_2;
    lv_obj_t *led_status_can_ch_3;
    lv_obj_t *can4_status_panel;
    lv_obj_t *label_hp_status_3;
    lv_obj_t *led_status_can_ch_4;
    lv_obj_t *can_status_lebel;
    lv_obj_t *can_page_button;
    lv_obj_t *obj0;
    lv_obj_t *lin_page_button;
    lv_obj_t *obj1;
    lv_obj_t *top_panel_sp;
    lv_obj_t *settings_page_label;
    lv_obj_t *settings_page_home_icon;
    lv_obj_t *can_settings_button;
    lv_obj_t *label_sp_button;
    lv_obj_t *icon_sp;
    lv_obj_t *lin_settings_button;
    lv_obj_t *label_sp_button_1;
    lv_obj_t *icon_sp_1;
    lv_obj_t *top_panel_cp;
    lv_obj_t *label_cp;
    lv_obj_t *label_cp_2;
    lv_obj_t *dd_can_ch_select;
    lv_obj_t *label_cp_3;
    lv_obj_t *dd_can_bitrate_select;
    lv_obj_t *label_cp_4;
    lv_obj_t *label_cp_5;
    lv_obj_t *dd_can_mode_select;
    lv_obj_t *can_settings_back;
    lv_obj_t *can_settings_download;
    lv_obj_t *cb_can_fd_enable;
    lv_obj_t *label_cp_6;
    lv_obj_t *cb_can_ch_enable;
    lv_obj_t *panel_canlogger_title;
    lv_obj_t *can_logger_page_lebel;
    lv_obj_t *can_logger_page_home_icon;
    lv_obj_t *can_logger_console;
    lv_obj_t *label_can_logger_console;
    lv_obj_t *button_canlogging_start_stop;
    lv_obj_t *label_canlogging_start_stop;
    lv_obj_t *top_panel_lin_home;
    lv_obj_t *lin_page_lebel;
    lv_obj_t *lin_page_time;
    lv_obj_t *lin_page_settings;
    lv_obj_t *lin_logger_panel;
    lv_obj_t *icon_hp_2;
    lv_obj_t *label_hp_button_2;
    lv_obj_t *lin_automation_panel;
    lv_obj_t *label_hp_button_3;
    lv_obj_t *icon_hp_3;
    lv_obj_t *lin_diagnostic_panel;
    lv_obj_t *icon_home_3;
    lv_obj_t *label_home_button_3;
    lv_obj_t *lin1_status_panel;
    lv_obj_t *label_hp_status_4;
    lv_obj_t *led_status_lin_ch_1;
    lv_obj_t *lin_status_lebel;
    lv_obj_t *can_page_button_1;
    lv_obj_t *obj2;
    lv_obj_t *lin_page_button_1;
    lv_obj_t *obj3;
    lv_obj_t *lin2_status_panel;
    lv_obj_t *label_hp_status_5;
    lv_obj_t *led_status_lin_ch_2;
    lv_obj_t *top_panel_cp_1;
    lv_obj_t *label_cp_1;
    lv_obj_t *label_cp_7;
    lv_obj_t *dd_lin_ch_select;
    lv_obj_t *label_cp_8;
    lv_obj_t *dd_lin_bitrate_select;
    lv_obj_t *lin_settings_back;
    lv_obj_t *lin_settings_download;
    lv_obj_t *panel_lin_logger_title;
    lv_obj_t *label_canlogger_title;
    lv_obj_t *iconbutton_lin_logger_home;
    lv_obj_t *lin_logger_console;
    lv_obj_t *label_lin_logger_console_1;
    lv_obj_t *button_lin_logging_start_stop;
    lv_obj_t *label_canlogging_start_stop_1;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_CAN_HOME = 2,
    SCREEN_ID_SETTING = 3,
    SCREEN_ID_CAN_SETTINGS = 4,
    SCREEN_ID_CAN_LOGGER = 5,
    SCREEN_ID_LIN_HOME = 6,
    SCREEN_ID_LIN_SETTINGS = 7,
    SCREEN_ID_LIN_LOGGER = 8,
};

void create_screen_main();
void tick_screen_main();

void create_screen_can_home();
void tick_screen_can_home();

void create_screen_setting();
void tick_screen_setting();

void create_screen_can_settings();
void tick_screen_can_settings();

void create_screen_can_logger();
void tick_screen_can_logger();

void create_screen_lin_home();
void tick_screen_lin_home();

void create_screen_lin_settings();
void tick_screen_lin_settings();

void create_screen_lin_logger();
void tick_screen_lin_logger();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/