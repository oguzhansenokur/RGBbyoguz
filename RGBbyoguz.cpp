#include "RGBbyoguz.h"

RGB::RGB_pinMode(int r,int g,int b){
    pinMode(r,OUTPUT);
        pinMode(g,OUTPUT);
    pinMode(b,OUTPUT);

}

RGB::RGB_write_by_string(char color[])
{
switch(color[])
{
case "white":
analogWrite(RGB.r,255);
analogWrite(RGB.g,255);
analogWrite(RGB.b,255);


break;
case "lime":
analogWrite(RGB.r,0);
analogWrite(RGB.g,255);
analogWrite(RGB.b,0);


break;
case "Red":
analogWrite(RGB.r,255);
analogWrite(RGB.g,0);
analogWrite(RGB.b,0);


break;
case "blue":
analogWrite(RGB.r,0);
analogWrite(RGB.g,0);
analogWrite(RGB.b,255);


break;
case "yellow":
analogWrite(RGB.r,255);
analogWrite(RGB.g,255);
analogWrite(RGB.b,0);


break;
case "cyan":
analogWrite(RGB.r,0);
analogWrite(RGB.g,255);
analogWrite(RGB.b,255);


break;
case "magenta":
analogWrite(RGB.r,255);
analogWrite(RGB.g,0);
analogWrite(RGB.b,255);



break;
















}
 void RGB::RGB_write_by_values(int rv,int gv,int bv){

analogWrite(RGB.r,rv);
analogWrite(RGB.g,gv);
analogWrite(RGB.b,bv);


 }





}