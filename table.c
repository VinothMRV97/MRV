#include<stdio.h>
int main()
{
int i,n,s;
scanf("%d",&n);
for(i=1;i<16;i++)
{
s=i*n;
printf("%d * %d = %d\n",i,n,s);
}
return 0;
}
