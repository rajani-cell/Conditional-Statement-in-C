//*Traffic Light Simulation*: Simulate a traffic light system using conditional statements, where the lights change based on predefined time intervals.
#include<stdio.h>
#include<unistd.h>


int main()
{

int redlighttime=7;
int yellowlighttime=3;
int greenlighttime=5;

while(1)
{
  printf("RED LIGHT\n");
  sleep(redlighttime);

  printf("YELLOW LIGHT\n");
   sleep(yellowlighttime);

   
  printf("GREEN LIGHT\n");
   sleep(greenlighttime);
}

  
 

  return 0;
}
