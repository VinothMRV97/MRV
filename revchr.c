#include<stdio.h>
int main()
{
int i,c;
char a[1000];
scanf("%[^\n]s", a);
for(i=0;a[i]!='\0';i++)
c++;
for(i=c;i>=0;i--)
{
printf("%c",a[i]);
}
return 0;
}
