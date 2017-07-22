#include<stdio.h>
int main()
{
int n,s=0,i;
scanf("%d",&n);
if(n>0)
  {
for(i=1;i<=n;i++)
s+=i;
 printf("%d",s);
}
  else
    printf("not natrual");
return 0;
}
