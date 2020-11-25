# AS5600 PI

Raspberry pi port of the Arduino library for the Grove 12-bit Magnetic Encoder (by Seeed studio) which uses the AS5600 chip.

I ended up needing this for a project so hacked it together; it works but there may be changes which are warranted. I've made it public so people can
use this or suggest modifications. All I've done is switch out the Arduino Wire calls for Linux I2C calls; the vast majority of the code is the same
as the original Arduino library (from which this is forked).

## Setup
Unfortunately I don't have a detailed setup process.

You'll need to enable I2C on your RPi and you also need to install i2c-tools and libi2c-dev; I think you'll also need the kernel headers. 
I originally wrote this on my laptop then ported it to the pi and found that the includes/compilation process were different; you may need to play 
about with it to get it to work.

On the Pi my final compilation command was:

`$: g++ AMS_5600_PI.cpp main.cpp -o main`

Where the class .cpp/.hpp and application .cpp files are all in the same directory but this is obviously application specific.

## Support
I don't intend to "support" this actively but feel free to raise an issue or get in touch if you find something is wrong; or if you want to actively
modify this to make it less system-specific (the aforementioned include/compile problems) then please feel free.
