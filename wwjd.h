#ifndef __WWJD_H__
#define __WWJD_H__
#include <algorithm>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <thread>
#include <pthread.h>

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
  int something;
  racecar() {
    int whatever = rand();
    puts(racecar_lut[((whatever & 31) >> 5) | whatever / 5 % (sizeof(racecar_lut) / sizeof(racecar_lut[0]))]);
  }
  void gaspedal(struct racecar *car) {
    this->something = std::move(car->something); // lol, actually compiles
  }
};

typedef pthread_t racecar_t;

static void programming_style() {
  http://www.keepcalmandposters.com/posters/793710.png
  puts("racecar"); // Faster than printf
}

void start_your_engines() {
    int i = 5;
    while ( i --> 1 ){
        printf("%d\n", i);
    }
    puts("Go!");
}

namespace windowdressing {
  inline void window_dressing(std::string exclaim="!") {
      printf("window dressing%s", exclaim.c_str());
      if (std::is_same<racecar_t, thread::native_handle_type>()){
          window_dressing(exclaim+"!");
      }
  }
}

}

}

#endif

