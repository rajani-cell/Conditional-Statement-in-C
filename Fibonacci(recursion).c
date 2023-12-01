//*Function Calls*: Write a function that calculates the Fibonacci sequence for a given input using recursion or iteration.
#include<stdio.h>

int fibo(int n);
int fibo(int n)
{
 
 if(n==0)
 {
  return 0;
 }

 else if(n==1)
 {
  return 1;
 }
 
else
{

  return fibo(n-1)+fibo(n-2);
}

}




int main()
{
int number;
printf("Enter the fibonacci size :");
scanf("%d",&number);

for(int i=0;i<number;i++)
{

printf("%d ",fibo(i));

}



return 0;

}
