#include "RGBbyoguz.h"
int _r;
int _g;
int _b;
char _color[]=color[];
RGB::RGB_pinMode(r,g,b){
    
    
    pinMode(r,OUTPUT);
        pinMode(g,OUTPUT);
    pinMode(b,OUTPUT);
_r=r;
    _g=g;
    _b=b;
}

RGB::RGB_write_by_string( color[])
{
switch(color[])
{
case "white":
analogWrite(_r,255);
analogWrite(_g,255);
analogWrite(_b,255);


break;
case "lime":
analogWrite(_r,0);
analogWrite(_g,255);
analogWrite(_b,0);


break;
case "Red":
analogWrite(_r,255);
analogWrite(_g,0);
analogWrite(_b,0);


break;
case "blue":
analogWrite(_r,0);
analogWrite(_g,0);
analogWrite(_b,255);


break;
case "yellow":
analogWrite(_r,255);
analogWrite(_g,255);
analogWrite(_b,0);


break;
case "cyan":
analogWrite(_r,0);
analogWrite(_g,255);
analogWrite(_b,255);


break;
case "magenta":
analogWrite(_r,255);
analogWrite(_g,0);
analogWrite(_b,255);



break;
















}
 void RGB::RGB_write_by_values( rv, gv, bv){

analogWrite(_r,rv);
analogWrite(_g,gv);
analogWrite(_b,bv);


 }





}
