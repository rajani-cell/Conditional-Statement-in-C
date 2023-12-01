//*Leap Year*: Create a program that determines whether a given year is a leap year or not, based on certain conditions (divisible by 4 but not by 100, unless divisible by 400).
#include<stdio.h>

int main()
{
int year;
printf("Enter year:");
scanf("%d",&year);

if((year%4==0 && year%100!=0) || (year%400==0))
{
printf("%d is leap year",year);
}

else
{
printf("%d is not leap year",year);
}




return 0;

}
