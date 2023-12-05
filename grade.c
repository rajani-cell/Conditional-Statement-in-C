//*Switch Statement*: Write a program that uses a switch statement to convert a numerical grade (e.g., 85) into a letter grade (e.g., 'A', 'B', 'C', etc.).
#include<stdio.h>
int main()
{
int number,num;
printf("Enter the number :");
scanf("%d",&number);

num=number/10;

switch(num)
{

case 10:
case 9:
case 8:
{
  printf("A+");
  break;
}

case 7:
{
  printf("A-");
  break;
}

case 6:
{
  printf("A");
  break;
}

default:
{
  printf("FAIL"); 
  break;
}



}

return 0;

}
