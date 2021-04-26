#pragma once
#include "subarctic/pinctrl.h"

// macro to disable pinmux helper node (runtime pinmux):
#define USES_PIN( pin ) &ocp { pin##_pinmux { status = "disabled"; }; }

// macro to disable spi channel created by cape-universal
#define _USES_SPI( cs ) cs { status = "disabled"; }
#define USES_SPI( bus, cs ) &spi##bus { channel@##_USES_SPI(cs); spi##bus##channel@##_USES_SPI(cs); }
