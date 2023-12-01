//*Age Classifier*: Create a program that categorizes a person's age into different groups (e.g., infant, child, teenager, adult) based on certain age ranges.
#include<stdio.h>
int main()
{

int age;
printf("Enter age =");
scanf("%d",&age);


if(age==1)
{
  printf("INFANT");
}

else if(1<age && age<=12)
{
 printf("CHILD");
}

else if(12<age && age<=17)
{
 printf("TEENAGE");
}

else 
{
 printf("ADULT");
}

  return 0;
}
