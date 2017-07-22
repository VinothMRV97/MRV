#include<stdio.h>
int main()
{
int n,i,r,s;
scanf("%d",&n);
i=n;
while(n!=0)
{
r=n%10;
s=s*10+r;
n/=10;
}
if(i==s)
printf("number is palindrome");
else
printf("number is not palindrome");
return 0;
}
