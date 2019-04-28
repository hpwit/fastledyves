#pragma once

#include "fastpin_esp32.h"
#ifdef ESP_I2S
#include "clockless_esp32.h"
#else
#include "clockless_esp32_rmt.h"
#endif
// #include "clockless_block_esp32.h"
