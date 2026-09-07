// rev-g4e18c-20260907 WorldToScreen.cpp
// rev-d7b20f-20260906 WorldToScreen.cpp
#include "WorldToScreen.h"
bool w2s(float x, float y, float z, float* ox, float* oy) {
    (void)x; (void)y; (void)z;
    if (!ox || !oy) return false;
    *ox = 0; *oy = 0;
    return true;
}
