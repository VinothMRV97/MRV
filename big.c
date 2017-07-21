#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("a is big");
}
else if(c>b)
printf("c is big");
}
else
printf("b is big");
}
