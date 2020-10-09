#include "RGBbyoguz.h"
int r, g,b;
int rv,gv,bv;
char color[];
RGB::RGB_pinMode(r,g,b){
    pinMode(r,OUTPUT);
        pinMode(g,OUTPUT);
    pinMode(b,OUTPUT);

}

RGB::RGB_write_by_string( color[])
{
switch(color[])
{
case "white":
analogWrite(r,255);
analogWrite(g,255);
analogWrite(b,255);


break;
case "lime":
analogWrite(r,0);
analogWrite(g,255);
analogWrite(b,0);


break;
case "Red":
analogWrite(r,255);
analogWrite(g,0);
analogWrite(b,0);


break;
case "blue":
analogWrite(r,0);
analogWrite(g,0);
analogWrite(b,255);


break;
case "yellow":
analogWrite(r,255);
analogWrite(g,255);
analogWrite(b,0);


break;
case "cyan":
analogWrite(r,0);
analogWrite(g,255);
analogWrite(b,255);


break;
case "magenta":
analogWrite(r,255);
analogWrite(g,0);
analogWrite(b,255);



break;
















}
 void RGB::RGB_write_by_values( rv, gv, bv){

analogWrite(r,rv);
analogWrite(g,gv);
analogWrite(b,bv);


 }





}
