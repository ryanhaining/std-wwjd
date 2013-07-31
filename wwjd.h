#ifndef __WWJD_H__
#define __WWJD_H__
#include <cstdio>
#include <cstdlib>

namespace std {

namespace wwjd {

// Optimize with LUT
static const char *racecar_lut[] = {
  "racecar",
  "racecar",
  "racecar",
  "racecar",
  "winrar"
};

struct racecar {
  racecar() {
    int whatever = rand();
    puts(racecar_lut[((whatever & 31) >> 5) | whatever / 5] % (sizeof(racecar_lut) / sizeof(racecar_lut[0])));
  }
};

}

}

#endif

