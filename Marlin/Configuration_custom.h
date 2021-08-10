#pragma once

//=================
// Resets
//=================
#undef SHOW_BOOTSCREEN
#undef SHOW_CUSTOM_BOOTSCREEN
#undef X_BED_SIZE
#undef Y_BED_SIZE
#undef Z_MAX_POS
#undef PREHEAT_1_LABEL
#undef PREHEAT_1_TEMP_HOTEND
#undef PREHEAT_1_TEMP_BED
#undef PREHEAT_1_FAN_SPEED
#undef PREHEAT_2_LABEL
#undef PREHEAT_2_TEMP_HOTEND
#undef PREHEAT_2_TEMP_BED
#undef PREHEAT_2_FAN_SPEED
#undef MIN_SOFTWARE_ENDSTOP_X
#undef MIN_SOFTWARE_ENDSTOP_Y
#undef MIN_SOFTWARE_ENDSTOP_Z
#undef USE_XMIN_PLUG
#undef USE_YMIN_PLUG
#undef USE_ZMIN_PLUG
#undef X_HOME_DIR
#undef Y_HOME_DIR
#undef Z_HOME_DIR
#undef INVERT_X_DIR
#undef INVERT_Y_DIR

//=================
// Bootscreen
//=================
#define SHOW_BOOTSCREEN
// Show initial logo
// #define SHOW_CUSTOM_BOOTSCREEN

//=================
// Bed Size
//=================
// Flip the 0,0 point: won't be coincident with home.
#define FLIP_ORIGIN
#define X_BED_SIZE 220
#define Y_BED_SIZE 220
#define Z_MAX_POS 240

//=================
// Filament Runout
//=================
#define FILAMENT_RUNOUT_SENSOR
// Set filament runout pin.
#define FIL_RUNOUT_PIN 29
// Enable the sensor on startup.
#define FIL_RUNOUT_ENABLED_DEFAULT true
// Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
#define NUM_RUNOUT_SENSORS 1
// Pin state indicating that filament is NOT present.
#define FIL_RUNOUT_STATE HIGH
// Use internal pullup for filament runout pins.
#define FIL_RUNOUT_PULLUP
// Set one or more commands to execute on filament runout.
#define FILAMENT_RUNOUT_SCRIPT "M600 U35"
// After a runout, print length before executing the runout script.
#define FILAMENT_RUNOUT_DISTANCE_MM 40

//=================
// Preheat
//=================
// Preheat PLA
#define PREHEAT_1_LABEL       "PLA"
#define PREHEAT_1_TEMP_HOTEND 190
#define PREHEAT_1_TEMP_BED     50
#define PREHEAT_1_FAN_SPEED     0
// Preheat ABS
#define PREHEAT_2_LABEL       "ABS"
#define PREHEAT_2_TEMP_HOTEND 240
#define PREHEAT_2_TEMP_BED    100
#define PREHEAT_2_FAN_SPEED     0

//=================
// Safety
//=================
// Prevent X negative values.
#define MIN_SOFTWARE_ENDSTOP_X
// Prevent Y negative values.
#define MIN_SOFTWARE_ENDSTOP_Y
// Prevent Z negative values.
#define MIN_SOFTWARE_ENDSTOP_Z

//=================
// END SETTINGS
//=================

#if ENABLED(FLIP_ORIGIN)
  #define USE_XMAX_PLUG
  #define USE_YMAX_PLUG
  #define USE_ZMIN_PLUG
  #define X_HOME_DIR 1
  #define Y_HOME_DIR 1
  #define Z_HOME_DIR -1
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
#else
  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
#endif
