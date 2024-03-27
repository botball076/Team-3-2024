#include "functions.h"
#include <kipr/wombat.h>
#include <stdlib.h>

void drive(float distance, float linear_speed)
{
    printf("hjdg\n");
 create3_drive_straight(distance, linear_speed);   
 create3_wait();
    
}
void claw(int position, int time)
{
    set_servo_position(0,position);
    msleep(time*1000);
}
void arm_down(int speed, int time)
{
 motor(0,speed);
 msleep(time);
 ao();
    
}
void arm_up(int speed, int time)
{
  motor(0,-speed);
  msleep(time);
  ao();
}
void turn(float angle, float max_angular_speed)// degreees per seconds
{
 create3_rotate_degrees(angle,max_angular_speed);
 create3_wait();//just adjust time automatically
}