#include "actions.h"
#include "vars.h"



void action_load_logger_screen(lv_event_t * e)
{
    loadScreen(SCREEN_ID_LOGGER_SCREEN);
}

void action_load_home_screen(lv_event_t * e)
{
    loadScreen(SCREEN_ID_HOME_SCREEN);
}

void action_logger_start_stop(lv_event_t * e)
{
    // TODO: Implement logger start/stop functionality
}

void action_channel_select(lv_event_t * e)
{
    // TODO: Implement channel selection
}

void action_view_logs(lv_event_t * e)
{
    // TODO: Implement view logs functionality
}

