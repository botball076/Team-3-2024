#include "missions.h"
#include "Robot.h"
#include <kipr/wombat.h>

extern int left;
  
extern int right;

extern int arm;

extern int claw;

//Adara/Nat
void mission_two() {
 //Start
    //move backwards
    drive(-1500,-1500,250);
    
    //wait
    drive (0,0,1000);
    
    //turning right
    drive(1400,0,2000);
    
    //wait
    drive (0,0,1000);
    
    //forward-turnish (collecting both rocks);
    drive (1500,1500,1000);
    
    drive (0,0,100);
    
    drive (100,1500,500);
    
    drive (0,0,100);
    
    drive (1500,1500,1000);
    
    drive (10,1500,1300);
    
    //wait
    drive (0,0,1000);
    
    /*turns to corner box to put rocks and poms inside
    drive(500,1700,1700);*/
    
    //forward into box
    drive(1000,1000,1500);
    
}