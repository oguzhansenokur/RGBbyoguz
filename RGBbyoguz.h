#ifndef RGBbyoguz.h
#define RGBbyoguz.h
#include "Arduino.h"

class RGB{
        int r,g,b;
        int color[3];
        int rv,gv,bv;
        void RGB_pinMode(r,g,b);
        
        void RGB_write_by_string(char color[]);

        void RGB_write_by_values(rv,gv,bv);



};






#endif