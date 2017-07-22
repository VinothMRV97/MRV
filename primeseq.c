#include<stdio.h>
int main()
{
int i,a,b,flag;
scanf("%d%d",&a,&b);
while(a<=b)
{
flag=0;
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d\t",a);
a++;
}
return 0;
}
