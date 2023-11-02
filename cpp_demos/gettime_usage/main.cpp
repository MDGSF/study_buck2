#include <chrono>
#include <iostream>
#include <thread>

#include "cpp_demos/gettime/gettime.hpp"

int main() {
  for (int i = 0; i < 3; ++i) {
    std::cout << "[" << i << "]: " << get_time_ms() << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
  }
  return 0;
}
