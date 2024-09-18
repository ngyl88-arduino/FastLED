#pragma once

#if defined(FASTLED_FORCE_SOFTWARE_PINS)
#warning "Software pin support forced, pin access will be sloightly slower."
#define NO_HARDWARE_PIN_SUPPORT
#undef HAS_HARDWARE_PIN_SUPPORT

#else

#if defined(ARDUINO_BLUEPILL_F103C8)
// from https://github.com/13rac1/FastLED-STM32
#include "fastpin_arm_stm_new.h"
#else
// Legacy fastled pin definitions
#include "fastpin_arm_stm_legacy.h"
#endif

#endif  // FASTLED_FORCE_SOFTWARE_PINS

