#pragma once
#include "subarctic/pinctrl.h"

// macro to disable pinmux helper node created by cape-universal
#define USES_PIN( pin ) &ocp { pin##_pinmux { status = "disabled"; }; }

// macro to disable child of gpio-of-helper created by cape-universal
// (supported since kernel 4.19.94-ti-r69)
#define USES_GPIO( pin ) &ocp { cape-universal { pin { status = "disabled"; }; }; }

// macro to disable spi channel created by cape-universal
#define _USES_SPI( cs ) cs { status = "disabled"; }
#define USES_SPI( bus, cs ) &spi##bus { channel@##_USES_SPI(cs); spi##bus##channel@##_USES_SPI(cs); }
