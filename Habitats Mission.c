#include "functions.h"
#include <kipr/wombat.h>
#include <stdlib.h>
/*drive(int distance, int linear_speed);

claw(int position, int time);

arm_up(int speed, int time);

arm_down(int speed, int time);

turn(float angle, float max_angular_speed);
*/
int Habitats_Mission()
{
create3_connect();
enable_servos();

turn(47,25);
arm_up(50,2800);
    
claw(1495,5);
arm_up(35,870);
turn(-45,25);
drive(0.64,0.2);
turn(89,30);
drive(0.50,0.3);
arm_down(100,700);
claw(0,10);

    
 return 0;   
}