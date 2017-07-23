#include<stdio.h>
int main()
{
int i,s=0,o=0;
for(i=1;i<=15;i++)
s+=i;
for(i=15;i<=45;i++)
{
if(i%2!=0)
{
o+=i;
}
}
printf("%d\n",s);
printf("%d\n",o);
printf("total=%d",s+o);
}
