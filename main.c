#include <kipr/wombat.h>
#include "missions.h"



int main()
{
    enable_servos();
    
    motor(0,100);
    motor(1,100);
    msleep(1000);
    
    motor(0,100);
    motor(1,50);
    msleep(1000);
    
    
    
    
    
    
    
    printf("Hello World\n");
    return 0;
}
