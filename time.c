#include <stdio.h>
int main()
{
int h,m,ct;
printf("Enter the time in hours: ");
scanf("%d",&h);
printf("Enter the time in minutes: ");
scanf("%d",&m);
ct=conversion(h,m);
printf("The time in minutes: %d ",ct);
return 0;
}
int conversion(int h,int m)
{
int t,ct;
t=h*60;
ct=t+m;
return ct;
}

