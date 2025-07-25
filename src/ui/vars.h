#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations



// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_IS_LOGGER_START = 0,
    FLOW_GLOBAL_VARIABLE_CHANNEL_SELECT = 1,
    FLOW_GLOBAL_VARIABLE_VIEW_LOGS = 2
};

// Native global variables

extern bool get_var_is_logger_start();
extern void set_var_is_logger_start(bool value);
extern int32_t get_var_channel_select();
extern void set_var_channel_select(int32_t value);
extern int32_t get_var_view_logs();
extern void set_var_view_logs(int32_t value);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/