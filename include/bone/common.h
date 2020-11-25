#pragma once
#include "subarctic/pinctrl.h"

// macro to disable pinmux helper node (runtime pinmux):
#define USES_PIN( pin ) &ocp { pin##_pinmux { status = "disabled"; }; }
