#include<stdio.h>
int main()
{
int y;
printf("Enter year\n");
scanf("%d",&y);
if(y%4==0)
printf("Leap year\n");
else
printf("NOT Leap year\n");
  return 0;
}
