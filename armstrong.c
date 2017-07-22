#include<stdio.h>
int main()
{
int n,o,r,e=0;
scanf("%d",&n);
o=n;
while(n!=0)
{
r=n%10;
e+=r*r*r;
n/=10;
}
if(e==o)
{
printf("armstrong no");
}
else
printf("not armstrong no");
}
