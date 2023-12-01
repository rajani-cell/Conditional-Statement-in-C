//*Array Manipulation*: Write a program that performs basic operations on arrays, such as finding the maximum, minimum, or calculating the average of array elements.
#include<stdio.h>
int main()
{
int size,arr[100];
printf("Enter the size of element :");
scanf("%d",&size);

printf("Enter the element of array :");
for(int i=0;i<size;i++)
{
  scanf("%d",&arr[i]);
}

int max=arr[0];

for(int i=0;i<size;i++)
{
 if(max<arr[i])
 max=arr[i]; 
}
 
 printf("Maximun element = %d\n",max);


 int min=arr[0];

for(int i=0;i<size;i++)
{
 if(min>arr[i])
 min=arr[i]; 
}
 
 printf("Minimum element = %d\n",min);


 float sum=0,avarage;

for(int i=0;i<size;i++)
{
  sum=sum+arr[i];
}

avarage=sum/size;

printf("sum= %f\n",sum);

printf("Avarage = %f\n",avarage);

return 0;

}
