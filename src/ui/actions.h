#ifndef EEZ_LVGL_UI_EVENTS_H
#define EEZ_LVGL_UI_EVENTS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void action_load_logger_screen(lv_event_t * e);
extern void action_load_home_screen(lv_event_t * e);
extern void action_logger_start_stop(lv_event_t * e);
extern void action_channel_select(lv_event_t * e);
extern void action_view_logs(lv_event_t * e);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_EVENTS_H*/