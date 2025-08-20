#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;
lv_obj_t *tick_value_change_obj;
uint32_t active_theme_index = 0;

void create_screen_main() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 320);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff4169e1), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_image_create(parent_obj);
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_image_set_src(obj, &img_logo);
        }
    }
    
    tick_screen_main();
}

void tick_screen_main() {
}

void create_screen_home() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.home = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 320);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffbac4e1), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Top_panel_home
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.top_panel_home = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 480, 60);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff002dbf), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_hp
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_hp = obj;
                    lv_obj_set_pos(obj, 189, 3);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_22, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "PDSL");
                }
                {
                    // label_hp_time
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_hp_time = obj;
                    lv_obj_set_pos(obj, 378, 6);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrant_bold_16, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "00:00:00");
                }
                {
                    // icon_hp_setting
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.icon_hp_setting = obj;
                    lv_obj_set_pos(obj, -10, -16);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, 64);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_setting, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_setting_pressed, NULL);
                    lv_obj_add_event_cb(obj, action_switch_to_setting, LV_EVENT_PRESSED, (void *)0);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                }
            }
        }
        {
            // button_hp
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.button_hp = obj;
            lv_obj_set_pos(obj, 14, 110);
            lv_obj_set_size(obj, 145, 100);
            lv_obj_add_event_cb(obj, action_switch_to_can_logging, LV_EVENT_PRESSED, (void *)0);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_shadow_width(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_x(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_spread(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffafbff2), LV_PART_MAIN | LV_STATE_PRESSED);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // icon_hp
                    lv_obj_t *obj = lv_image_create(parent_obj);
                    objects.icon_hp = obj;
                    lv_obj_set_pos(obj, 23, -8);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_image_set_src(obj, &img_logging);
                }
                {
                    // label_hp_button
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_hp_button = obj;
                    lv_obj_set_pos(obj, 8, 56);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff4b4949), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "CAN Logger");
                }
            }
        }
        {
            // button_hp_1
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.button_hp_1 = obj;
            lv_obj_set_pos(obj, 168, 110);
            lv_obj_set_size(obj, 145, 100);
            lv_obj_add_event_cb(obj, action_toggle_led, LV_EVENT_PRESSED, (void *)0);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_shadow_width(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_x(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffafbff2), LV_PART_MAIN | LV_STATE_PRESSED);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_hp_button_1
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_hp_button_1 = obj;
                    lv_obj_set_pos(obj, -11, 56);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff4b4949), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "CAN Automation");
                }
                {
                    // icon_hp_1
                    lv_obj_t *obj = lv_image_create(parent_obj);
                    objects.icon_hp_1 = obj;
                    lv_obj_set_pos(obj, 24, -8);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_image_set_src(obj, &img_automation);
                }
            }
        }
        {
            // button_hp_2
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.button_hp_2 = obj;
            lv_obj_set_pos(obj, 323, 110);
            lv_obj_set_size(obj, 145, 100);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_shadow_width(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_x(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffafbff2), LV_PART_MAIN | LV_STATE_PRESSED);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // icon_home_2
                    lv_obj_t *obj = lv_image_create(parent_obj);
                    objects.icon_home_2 = obj;
                    lv_obj_set_pos(obj, 24, -7);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_image_set_src(obj, &img_diagnostic);
                }
                {
                    // label_home_button_2
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_home_button_2 = obj;
                    lv_obj_set_pos(obj, 8, 56);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff4b4949), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Diagnostics");
                }
            }
        }
        {
            // bottom_panel_hp
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.bottom_panel_hp = obj;
            lv_obj_set_pos(obj, 0, 265);
            lv_obj_set_size(obj, 120, 55);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff002dbf), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_hp_status
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_hp_status = obj;
                    lv_obj_set_pos(obj, 1, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "CAN 1");
                }
                {
                    // led_status_can_ch_1
                    lv_obj_t *obj = lv_led_create(parent_obj);
                    objects.led_status_can_ch_1 = obj;
                    lv_obj_set_pos(obj, 81, 7);
                    lv_obj_set_size(obj, 15, 15);
                    lv_led_set_color(obj, lv_color_hex(0xffff0000));
                    lv_led_set_brightness(obj, 200);
                    lv_obj_set_style_max_width(obj, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_max_height(obj, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // bottom_panel_hp_1
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.bottom_panel_hp_1 = obj;
            lv_obj_set_pos(obj, 120, 265);
            lv_obj_set_size(obj, 120, 55);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff002dbf), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_hp_status_1
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_hp_status_1 = obj;
                    lv_obj_set_pos(obj, -3, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "CAN 2");
                }
                {
                    // led_status_can_ch_2
                    lv_obj_t *obj = lv_led_create(parent_obj);
                    objects.led_status_can_ch_2 = obj;
                    lv_obj_set_pos(obj, 81, 7);
                    lv_obj_set_size(obj, 15, 15);
                    lv_led_set_color(obj, lv_color_hex(0xffff0000));
                    lv_led_set_brightness(obj, 200);
                    lv_obj_set_style_max_width(obj, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_max_height(obj, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // bottom_panel_hp_2
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.bottom_panel_hp_2 = obj;
            lv_obj_set_pos(obj, 240, 265);
            lv_obj_set_size(obj, 120, 55);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff002dbf), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_hp_status_2
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_hp_status_2 = obj;
                    lv_obj_set_pos(obj, 0, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "CAN 3");
                }
                {
                    // led_status_can_ch_3
                    lv_obj_t *obj = lv_led_create(parent_obj);
                    objects.led_status_can_ch_3 = obj;
                    lv_obj_set_pos(obj, 81, 7);
                    lv_obj_set_size(obj, 15, 15);
                    lv_led_set_color(obj, lv_color_hex(0xffff0000));
                    lv_led_set_brightness(obj, 200);
                    lv_obj_set_style_max_width(obj, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_max_height(obj, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // Top_panel_hp_4
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.top_panel_hp_4 = obj;
            lv_obj_set_pos(obj, 360, 265);
            lv_obj_set_size(obj, 120, 55);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff002dbf), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_hp_status_3
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_hp_status_3 = obj;
                    lv_obj_set_pos(obj, -2, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "CAN 4");
                }
                {
                    // led_status_can_ch_4
                    lv_obj_t *obj = lv_led_create(parent_obj);
                    objects.led_status_can_ch_4 = obj;
                    lv_obj_set_pos(obj, 81, 7);
                    lv_obj_set_size(obj, 15, 15);
                    lv_led_set_color(obj, lv_color_hex(0xffff0000));
                    lv_led_set_brightness(obj, 200);
                    lv_obj_set_style_max_width(obj, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_max_height(obj, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // label_hp_2
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_hp_2 = obj;
            lv_obj_set_pos(obj, 6, 241);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Status:");
        }
    }
    
    tick_screen_home();
}

void tick_screen_home() {
}

void create_screen_setting() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.setting = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 320);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffbac4e1), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Top_panel_sp
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.top_panel_sp = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 480, 60);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff002dbf), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_sp
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_sp = obj;
                    lv_obj_set_pos(obj, 175, 3);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_22, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "SETTING");
                }
                {
                    // icon_sp_home
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.icon_sp_home = obj;
                    lv_obj_set_pos(obj, -8, -18);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, 64);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_home_icon, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_home_pressed, NULL);
                    lv_obj_add_event_cb(obj, action_switch_to_home, LV_EVENT_PRESSED, (void *)0);
                }
            }
        }
        {
            // button_sp
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.button_sp = obj;
            lv_obj_set_pos(obj, 81, 110);
            lv_obj_set_size(obj, 145, 100);
            lv_obj_add_event_cb(obj, action_switch_to_can_ch_settings, LV_EVENT_PRESSED, (void *)0);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_shadow_width(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_x(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffafbff2), LV_PART_MAIN | LV_STATE_PRESSED);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_sp_button
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_sp_button = obj;
                    lv_obj_set_pos(obj, 36, 56);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff4b4949), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "CAN ");
                }
                {
                    // icon_sp
                    lv_obj_t *obj = lv_image_create(parent_obj);
                    objects.icon_sp = obj;
                    lv_obj_set_pos(obj, 23, -11);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_image_set_src(obj, &img_can);
                }
            }
        }
        {
            // button_sp_1
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.button_sp_1 = obj;
            lv_obj_set_pos(obj, 241, 110);
            lv_obj_set_size(obj, 145, 100);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_shadow_width(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_x(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_ofs_y(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffafbff2), LV_PART_MAIN | LV_STATE_PRESSED);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_sp_button_1
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_sp_button_1 = obj;
                    lv_obj_set_pos(obj, 42, 56);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff4b4949), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "LIN");
                }
                {
                    // icon_sp_1
                    lv_obj_t *obj = lv_image_create(parent_obj);
                    objects.icon_sp_1 = obj;
                    lv_obj_set_pos(obj, 23, -8);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_image_set_src(obj, &img_lin);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                }
            }
        }
    }
    
    tick_screen_setting();
}

void tick_screen_setting() {
}

void create_screen_can() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.can = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 320);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffbac4e1), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Top_panel_cp
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.top_panel_cp = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 480, 60);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff002dbf), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_cp
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_cp = obj;
                    lv_obj_set_pos(obj, 86, 3);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_22, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "CAN CHANNEL SETTING");
                }
            }
        }
        {
            // label_cp_2
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_cp_2 = obj;
            lv_obj_set_pos(obj, 114, 82);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Channel:");
        }
        {
            // DD_ch_select
            lv_obj_t *obj = lv_dropdown_create(parent_obj);
            objects.dd_ch_select = obj;
            lv_obj_set_pos(obj, 213, 70);
            lv_obj_set_size(obj, 150, LV_SIZE_CONTENT);
            lv_dropdown_set_options(obj, "CH 1\nCH 2\nCH 3\nCH 4\n");
            lv_dropdown_set_selected(obj, 0);
        }
        {
            // label_cp_3
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_cp_3 = obj;
            lv_obj_set_pos(obj, 113, 131);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Bit Rate:");
        }
        {
            // DD_Bitrate_select
            lv_obj_t *obj = lv_dropdown_create(parent_obj);
            objects.dd_bitrate_select = obj;
            lv_obj_set_pos(obj, 213, 119);
            lv_obj_set_size(obj, 150, LV_SIZE_CONTENT);
            lv_dropdown_set_options(obj, "500K\n1000K\n1500K");
            lv_dropdown_set_selected(obj, 0);
        }
        {
            // label_cp_4
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_cp_4 = obj;
            lv_obj_set_pos(obj, 113, 225);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "CAN FD:");
        }
        {
            // label_cp_5
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_cp_5 = obj;
            lv_obj_set_pos(obj, 113, 181);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Mode:");
        }
        {
            // DD_mode_select
            lv_obj_t *obj = lv_dropdown_create(parent_obj);
            objects.dd_mode_select = obj;
            lv_obj_set_pos(obj, 213, 169);
            lv_obj_set_size(obj, 150, LV_SIZE_CONTENT);
            lv_dropdown_set_options(obj, "Normal\nSilent (Listening)\nLoopack");
            lv_dropdown_set_selected(obj, 0);
        }
        {
            // icon_cp
            lv_obj_t *obj = lv_imagebutton_create(parent_obj);
            objects.icon_cp = obj;
            lv_obj_set_pos(obj, 11, 250);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, 64);
            lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_back, NULL);
            lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_back_pressed, NULL);
            lv_obj_add_event_cb(obj, action_switch_to_setting, LV_EVENT_PRESSED, (void *)0);
        }
        {
            // icon_cp_1
            lv_obj_t *obj = lv_imagebutton_create(parent_obj);
            objects.icon_cp_1 = obj;
            lv_obj_set_pos(obj, 402, 250);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, 64);
            lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_save, NULL);
            lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_save_pressed, NULL);
            lv_obj_add_event_cb(obj, action_set_can_ch_config, LV_EVENT_PRESSED, (void *)0);
        }
        {
            // CB_CanFdEnable
            lv_obj_t *obj = lv_checkbox_create(parent_obj);
            objects.cb_can_fd_enable = obj;
            lv_obj_set_pos(obj, 213, 223);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_checkbox_set_text(obj, "");
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE);
        }
        {
            // label_cp_6
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_cp_6 = obj;
            lv_obj_set_pos(obj, 113, 260);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_15, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff212121), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Enable:");
        }
        {
            // CB_CanCHEnable
            lv_obj_t *obj = lv_checkbox_create(parent_obj);
            objects.cb_can_ch_enable = obj;
            lv_obj_set_pos(obj, 213, 256);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_checkbox_set_text(obj, "");
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE);
        }
    }
    
    tick_screen_can();
}

void tick_screen_can() {
    {
        bool new_val = get_var_is_ch_fd();
        bool cur_val = lv_obj_has_flag(objects.cb_can_fd_enable, LV_OBJ_FLAG_CLICKABLE);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.cb_can_fd_enable;
            if (new_val) lv_obj_add_flag(objects.cb_can_fd_enable, LV_OBJ_FLAG_CLICKABLE);
            else lv_obj_clear_flag(objects.cb_can_fd_enable, LV_OBJ_FLAG_CLICKABLE);
            tick_value_change_obj = NULL;
        }
    }
    {
        bool new_val = get_var_is_ch_fd();
        bool cur_val = lv_obj_has_flag(objects.cb_can_ch_enable, LV_OBJ_FLAG_CLICKABLE);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.cb_can_ch_enable;
            if (new_val) lv_obj_add_flag(objects.cb_can_ch_enable, LV_OBJ_FLAG_CLICKABLE);
            else lv_obj_clear_flag(objects.cb_can_ch_enable, LV_OBJ_FLAG_CLICKABLE);
            tick_value_change_obj = NULL;
        }
    }
}

void create_screen_can_logger() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.can_logger = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 320);
    lv_obj_add_event_cb(obj, action_set_can_logging_start_stop, LV_EVENT_PRESSED, (void *)0);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffbac4e1), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // panel_Canlogger_Title
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_canlogger_title = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 480, 60);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_ELASTIC);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff002dbf), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_canlogger_title
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_canlogger_title = obj;
                    lv_obj_set_pos(obj, 175, 3);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &ui_font_montserrat_bold_22, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "CAN Logger");
                }
                {
                    // iconbutton_canlogger_home
                    lv_obj_t *obj = lv_imagebutton_create(parent_obj);
                    objects.iconbutton_canlogger_home = obj;
                    lv_obj_set_pos(obj, -8, -18);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, 64);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_RELEASED, NULL, &img_home_icon, NULL);
                    lv_imagebutton_set_src(obj, LV_IMAGEBUTTON_STATE_PRESSED, NULL, &img_home_pressed, NULL);
                    lv_obj_add_event_cb(obj, action_switch_to_home, LV_EVENT_PRESSED, (void *)0);
                }
            }
        }
        {
            // TA_CanLogger_Console
            lv_obj_t *obj = lv_textarea_create(parent_obj);
            objects.ta_can_logger_console = obj;
            lv_obj_set_pos(obj, 8, 193);
            lv_obj_set_size(obj, 464, 117);
            lv_textarea_set_max_length(obj, 1024);
            lv_textarea_set_one_line(obj, false);
            lv_textarea_set_password_mode(obj, false);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE);
        }
        {
            // label_CanLogger_Console
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_can_logger_console = obj;
            lv_obj_set_pos(obj, 11, 170);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "Log Console");
        }
        {
            // button_Canlogging_StartStop
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.button_canlogging_start_stop = obj;
            lv_obj_set_pos(obj, 165, 92);
            lv_obj_set_size(obj, 150, 68);
            lv_obj_add_event_cb(obj, action_set_can_logging_start_stop, LV_EVENT_PRESSED, (void *)0);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff002dbf), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff487cd1), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_grad_dir(obj, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_Canlogging_StartStop
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_canlogging_start_stop = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Start Logging");
                }
            }
        }
    }
    
    tick_screen_can_logger();
}

void tick_screen_can_logger() {
}



typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main,
    tick_screen_home,
    tick_screen_setting,
    tick_screen_can,
    tick_screen_can_logger,
};
void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen_funcs[screenId - 1]();
}

void create_screens() {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_main();
    create_screen_home();
    create_screen_setting();
    create_screen_can();
    create_screen_can_logger();
}
