#include <stdio.h>
int main()
{
int n,s;
printf("Enter a number : ");
scanf("%d",&n);
s=0;
while(n>0)
{
s=s+(n%10);
n=n/10;
}
printf("THE SUM IS %d",s);
return 0;
}
