# AS5600 PI

Raspberry pi port of the Arduino library for the Grove 12-bit Magnetic Encoder (by Seeed studio) which uses the AS5600 chip.

I ended up needing this for a project so hacked it together; it works but there may be changes which are warranted. I've made it public so people can
use this or suggest modifications. All I've done is switch out the Arduino Wire calls for Linux I2C calls; the vast majority of the code is the same
as the original Arduino library.
