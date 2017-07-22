#include<stdio.h>
int main()
{
int b,p,a=1,i;
scanf("%d%d",&b,&p);
for(i=p;i!=0;i--)
{
a*=b;
}
printf("%d",a);
return 0;
}
