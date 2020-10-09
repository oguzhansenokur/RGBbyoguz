#ifndef RGBbyoguz.h
#define RGBbyoguz.h
#include "Arduino.h"

class RGB{
        
 public:
    
        void RGB_pinMode( int r,  int g, int b);
        
        void RGB_write_by_string( char color);

        void RGB_write_by_values( int rv, int  gv, int bv);



};






#endif
