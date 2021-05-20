#include <stdio.h>
float average(int,int,int);
int main()
{
int a,b,c;
float avg;
printf("Enter 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);
avg=average(a,b,c);
printf("Average is %f",avg);
return 0;
}
float average(int a,int b,int c)
{
float avg;
avg=(a+b+c)/3;
return avg;
}
