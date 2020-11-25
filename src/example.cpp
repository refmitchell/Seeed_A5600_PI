/*
  Example encoder usage; detecting a magnet and
  printing the angle out to the terminal.
*/

#include <iostream>
#include <chrono>
#include <thread>

/*
   AMS_5600 RPi header, make sure it's in the
   correct directory.
*/
#include "AMS_5600_PI.hpp"

/* For convenience */
#define LOG(x) std::cout << x << std::endl

int main(int argc, char **argv){
  AMS_5600 encoder;

  /* Setup */
  std::string bus = "/dev/i2c-1";

  encoder.init(bus);

  LOG("Encoder initialised");

  /* Loop until we detect a magnet. */
  while (!encoder.detectMagnet()){
    LOG("Magnet not detected");
    std::this_thread::sleep_for(std::chrono::milliseconds(2));
  }

  LOG("Magnet detected");

  /* Loop indefinitely to print out the angle. */
  while(1) {
    float angle = encoder.getRawAngle() * 0.087;
    LOG(angle);
    std::this_thread::sleep_for(std::chrono::milliseconds(2));
  }

  return 0;
}
