﻿/**
 * @file lv_windows_input.h
 *
 */

#ifndef LV_WINDOWS_INPUT_H
#define LV_WINDOWS_INPUT_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl.h"
#define LV_USE_WINDOWS

//#include "../../display/lv_display.h"
//#include "../../indev/lv_indev.h"

#ifdef LV_USE_WINDOWS

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

    /**
     * @brief Open a LVGL pointer input device object for the specific LVGL
     *        display object, or create it if the LVGL pointer input device
     *        object is not created or removed before.
     * @param display The specific LVGL display object.
     * @return The LVGL pointer input device object for the specific LVGL
     *         display object.
    */
    lv_indev_t* lv_windows_acquire_pointer_device(lv_display_t* display);

    /**
     * @brief Open a LVGL keypad input device object for the specific LVGL
     *        display object, or create it if the LVGL keypad input device
     *        object is not created or removed before.
     * @param display The specific LVGL display object.
     * @return The LVGL keypad input device object for the specific LVGL
     *         display object.
    */
    lv_indev_t* lv_windows_acquire_keypad_device(lv_display_t* display);

/**********************
 *      MACROS
 **********************/

#endif // LV_USE_WINDOWS

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_WINDOWS_INPUT_H*/