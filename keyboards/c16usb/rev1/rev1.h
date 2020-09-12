#pragma once

#include "quantum.h"

// If you want something similar to what Taran from LMG does in https://github.com/TaranVH/2nd-keyboard
// you can create a "wrapper key" by uncommenting the row below and chosing your wrapper keycode.
// You can then change the keymap in ../keymaps/default/keymap.c to adjust what key is sent inside the
// wrapper.
// Note: The default is to not wrap and to send F13-F24 with combinations of shift/control/alt as these
// are immediately usable in most software (e.g. OBS and DCSB for streaming) without using AHK.
//#define KC_WRAPPER_KEY KC_F24

#define LAYOUT_64( \
    k00, k01, k02, k03, k04, k05, k06, k07, \
    k08, k09, k0A, k0B, k0C, k0D, k0E, k0F, \
    k10, k11, k12, k13, k14, k15, k16, k17, \
    k18, k19, k1A, k1B, k1C, k1D, k1E, k1F, \
    k20, k21, k22, k23, k24, k25, k26, k27, \
    k28, k29, k2A, k2B, k2C, k2D, k2E, k2F, \
    k30, k31, k32, k33, k34, k35, k36, k37, \
    k38, k39, k3A, k3B, k3C, k3D, k3E, k3F  \
) { \
  {k00, k01, k02, k03, k04, k05, k06, k07 }, \
  {k08, k09, k0A, k0B, k0C, k0D, k0E, k0F }, \
  {k10, k11, k12, k13, k14, k15, k16, k17},  \
  {k18, k19, k1A, k1B, k1C, k1D, k1E, k1F},  \
  {k20, k21, k22, k23, k24, k25, k26, k27},  \
  {k28, k29, k2A, k2B, k2C, k2D, k2E, k2F},  \
  {k30, k31, k32, k33, k34, k35, k36, k37},  \
  {k38, k39, k3A, k3B, k3C, k3D, k3E, k3F}   \
}

#define KEYMAP LAYOUT_64
#define LAYOUT LAYOUT_64
