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
    FLOW_GLOBAL_VARIABLE_IS_CH_FD = 0,
    FLOW_GLOBAL_VARIABLE_IS_CANLOGGING_ENABLED = 1,
    FLOW_GLOBAL_VARIABLE_LED_TOGGLE = 2
};

// Native global variables

extern bool get_var_is_ch_fd();
extern void set_var_is_ch_fd(bool value);
extern bool get_var_is_canlogging_enabled();
extern void set_var_is_canlogging_enabled(bool value);
extern bool get_var_led_toggle();
extern void set_var_led_toggle(bool value);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/