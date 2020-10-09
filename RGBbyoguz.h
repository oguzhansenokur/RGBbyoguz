#ifndef RGBbyoguz.h
#define RGBbyoguz.h
#include "Arduino.h"

class RGB{
       extern int r,g,b;
   extern     int color[3];
     extern   int rv,gv,bv;
        void RGB_pinMode(r,g,b);
        
        void RGB_write_by_string( color[]);

        void RGB_write_by_values(rv,gv,bv);



};






#endif
