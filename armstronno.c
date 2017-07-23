#include<stdio.h>
#include<math.h>
int main()
{
int a,b,i,t1,t2,n=0,r=0,s;
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
t1=i;
t2=i;
while(t1!=0)
{
t1/=10;
n++;
}
while(t2!=0)
{
s=t2%10;
r+=pow(s,n);
t2/=10;
}
if(r==i)
printf("%d\n",i);
n=0;
r=0;
}
return 0;
}
