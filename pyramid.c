//*Nested Loops*: Create a pattern with nested loops, for instance, a pyramid made of asterisks or numbers.
#include<stdio.h>
int main()
{
int number;
printf("Enter the number of row :");
scanf("%d",&number);


for(int i=1;i<=number;i++)
{
  for(int j=1;j<=(2*number)-1;j++)
  {

   if(j>=number-(i-1) && j<=number+(i-1))
   {
    printf("*");
   }
   
  else
  {
    printf(" ");
  }

  
  }
printf("\n");

}



return 0;

}
