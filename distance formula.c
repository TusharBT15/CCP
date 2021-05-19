#include<stdio.h>
#include<math.h>
int main()
{
int x1 , x2 , y1 , y2 , x , y ;
float distance ;
printf("ENTER THE FIRST COORDINATES : ");
scanf("%d%d",&x1 , &y1);
printf("ENTER THE SECOND COORDINATES : ");
scanf("%d%d",&x2 , &y2);
x = (x2 - x1);
y = (y2 - y1);
distance = sqrt( x*x + y*y);
printf("THE DISTANCE BETWEEN THE POINTS IS = %f" , distance);
return 0;
}
