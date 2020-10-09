#include "RGBbyoguz.h"
int _r;
int _g;
int _b;


void RGB::RGB_pinMode(int r,int g,int b){
    
    
    pinMode(r,OUTPUT);
        pinMode(g,OUTPUT);
    pinMode(b,OUTPUT);
_r=r;
    _g=g;
    _b=b;
}

void RGB::RGB_write_by_string( char color)
{
switch(color)
{
case 'w':
analogWrite(_r,255);
analogWrite(_g,255);
analogWrite(_b,255);


break;
case 'l':
analogWrite(_r,0);
analogWrite(_g,255);
analogWrite(_b,0);


break;
case 'r':
analogWrite(_r,255);
analogWrite(_g,0);
analogWrite(_b,0);


break;
case 'b':
analogWrite(_r,0);
analogWrite(_g,0);
analogWrite(_b,255);


break;
case 'y':
analogWrite(_r,255);
analogWrite(_g,255);
analogWrite(_b,0);


break;
case 'c':
analogWrite(_r,0);
analogWrite(_g,255);
analogWrite(_b,255);


break;
case 'm':
analogWrite(_r,255);
analogWrite(_g,0);
analogWrite(_b,255);



break;
















}}
 void RGB::RGB_write_by_values(int rv,int gv,int bv){

analogWrite(_r,rv);
analogWrite(_g,gv);
analogWrite(_b,bv);


 }






