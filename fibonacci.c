#include<stdio.h>
int main()
{
int n,t1=0,i,t2=1,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d\n",t1);
s=t1+t2;
t1=t2;
t2=s;
}
return 0;
}
