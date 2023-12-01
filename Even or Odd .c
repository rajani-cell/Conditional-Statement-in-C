//1. *Even or Odd*: Write a program that checks if a given integer is even or odd using conditional statements.
#include<stdio.h>

int main()
{
int number;
printf("Enter the number :");
scanf("%d",&number);

if(number%2==0)
{
printf("%d is even munber",number);
}

else
{
printf("%d is odd munber",number);
}




return 0;

}
