#include<stdio.h>
#include<math.h>
int main()
{
float area, s ;
int a,b,c;
printf("ENTER SIDES OF A TRIANGLE : ");
scanf("%d %d %d" , &a , &b , &c);
s = ( a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("THE AREA OF TRIANGLE = %f" , area);
return 0 ;
}
