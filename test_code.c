#include <stdio.h>
#include <kipr/wombat.h>

int main()
{
  printf("Johnny needs to code\n");
  motor(0,100);
  motor(3,100);
  msleep(3000);
  motor(0,100);
  motor(3,0);
  msleep(2000);
  
  return 0;
}
