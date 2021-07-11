#include<stdio.h>
int main()
{
int a,b;
int *m,*n;
int sub,mult,add;
float rem,div;
printf("Enter 2 integers :");
scanf("%d%d",&a,&b);
m=&a;
n=&b;
add=(*m)+(*n);
sub=(*m)-(*n);
mult=(*m)*(*n);
div=(*m)/(*n);
rem=(*m)%(*n);
printf("Addition =%d\n",add);
printf("Subtraction =%d\n",sub);
printf("Multiplication =%d\n",mult);
printf("Devision = %.2f\n",div);
printf("Remainder = %.2f",rem);
return 0;
}
