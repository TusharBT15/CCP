#include <stdio.h>
int main()
{
int c,m,n;
printf("Enter the range of the nos :\n");
scanf("%d%d",&m,&n);
while(m<=n)
{
if(m%2==0)
printf("%d\n",m);
m=m+1;
}
return 0;
}
