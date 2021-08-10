#pragma once

//=================
// Resets
//=================
#undef SHOW_BOOTSCREEN
#undef SHOW_CUSTOM_BOOTSCREEN
#undef PREHEAT_1_LABEL
#undef PREHEAT_1_TEMP_HOTEND
#undef PREHEAT_1_TEMP_BED
#undef PREHEAT_1_FAN_SPEED
#undef PREHEAT_2_LABEL
#undef PREHEAT_2_TEMP_HOTEND
#undef PREHEAT_2_TEMP_BED
#undef PREHEAT_2_FAN_SPEED
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
