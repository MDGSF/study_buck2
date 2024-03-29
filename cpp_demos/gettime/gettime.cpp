#include "gettime.hpp"

#include <time.h>
#include <unistd.h>

#include <iostream>

int64_t get_time_ms() {
  struct timespec tp;
  clock_gettime(CLOCK_MONOTONIC, &tp);
  return tp.tv_sec * 1000 + tp.tv_nsec / 1000000;
}