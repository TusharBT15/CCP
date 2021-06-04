#include <stdio.h>
int main()
{
int num,i,prod;
printf("Enter a number : ");
scanf("%d",&num);
i=1;
while(i<=100)
{
prod=num*i;
printf("%d*%d=%d\n",num,i,prod);
i++;
}
return 0;
}
