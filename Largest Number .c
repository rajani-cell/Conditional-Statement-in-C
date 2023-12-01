//*Largest Number*: Write a program that takes three numbers as input and uses conditional statements to find and display the largest among them.
#include<stdio.h>

int main()
{
int a,b,c,d,e;
printf("Enter five integer number :");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

if(a>b && a>c && a>d && a>e)
{
printf("Largest value = %d",a);
}

else if(b>c && b>d && b>e)
{
 printf("Largest value = %d",b);
}

else if(c>d && c>e)
{
 printf("Largest value = %d",c);
}

else if(d>e)
{
 printf("Largest value = %d",d);
}

else
{
  printf("Largest value = %d",e);
}
return 0;

}
