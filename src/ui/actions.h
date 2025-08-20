#ifndef EEZ_LVGL_UI_EVENTS_H
#define EEZ_LVGL_UI_EVENTS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void timer_cb_load_home_screen(lv_timer_t * timer);
extern void action_switch_to_setting(lv_event_t * e);
extern void action_switch_to_home(lv_event_t * e);
extern void action_switch_to_can_ch_settings(lv_event_t * e);
extern void action_set_can_ch_config(lv_event_t * e);
extern void action_switch_to_can_logging(lv_event_t * e);
extern void action_set_can_logging_start_stop(lv_event_t * e);
extern void action_toggle_led(lv_event_t * e);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_EVENTS_H*/