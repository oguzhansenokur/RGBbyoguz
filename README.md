Example---->

#include "RGBbyoguz.h"
RGB rgb;
void setup() {
  // put your setup code here, to run once:
rgb.RGB_pinMode(10,9,8);//pins of red,green,blue
}

void loop() {
  // put your main code here, to run repeatedly:
rgb.RGB_write_by_string('r');//in here you can put 'w'(white),'r'(red),'l'(lime green),'b'(blue),'y'(yellow),'c'(cyan),'m'(magenta)
}
