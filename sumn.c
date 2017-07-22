#include<stdio.h>
int main()
{
int i=0,n,s=0;
scanf("%d",&n);
while(i<=n)
{
s+=i;
i++;
}
printf("%d",s);
return 0;
}
