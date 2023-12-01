//1. *Conditional Statements*: Write a program that takes an integer as input and uses conditional statements to determine if it's positive, negative, or zero.
#include<stdio.h>
int main()
{
int number;
printf("Enter the number :");
scanf("%d",&number);

if(number==0)
{
  printf("Its zero.");
}
else if (number>0)
{
   printf("Its positive integer.");
}

else if (number<0)
{
   printf("Its negative integer.");
}

return 0;

}
