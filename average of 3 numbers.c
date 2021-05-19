#include<stdio.h>
int main()
{
float average;
int a,b,c;
printf("ENTER THE 3 NUMBERS : ");
scanf("%d %d %d" , &a , &b , &c);
average = ( a+b+c)/3;
printf("AVERAGE = %f" , average);
return 0 ;
}
