#include <stdio.h>
#include<math.h>
int main()
{
double a,b,c,det;
double realPart,imagPart;
float root1,root2;
printf("Enter the coordinates a,b,c : ");
scanf("%lf%lf%lf",&a,&b,&c );
det= b*b - 4 * a * c ;
if(det<0)
{
realPart =-b/(2*a);
imagPart =sqrt(-det)/(2*a);
printf("the roots are imaginary\n");
printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
}
else if(det==0)
{
root1 = -b/2*a;
printf("the roots are real and equal=%.2lf",root1);
}
else
{
root1=(-b+sqrt(det))/2*a;
root2=(-b-sqrt(det))/2*a;
printf("roots of the equation = %.2lf and %.2lf",root1,root2);
}
return 0;
}
