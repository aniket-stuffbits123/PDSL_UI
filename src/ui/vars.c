#include "vars.h"

static int32_t view_logs = 0;
static bool is_logger_start = 0;
static int32_t channel_select = 0;

int32_t get_var_view_logs()
{
    return view_logs;
}

void set_var_view_logs(int32_t value)
{
    view_logs = value;
}

bool get_var_is_logger_start()
{
    return is_logger_start;
}

void set_var_is_logger_start(bool value)
{
    is_logger_start = value;
}

int32_t get_var_channel_select()
{
    return channel_select;
}

void set_var_channel_select(int32_t value)
{
    channel_select = value;
}