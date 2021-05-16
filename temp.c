#include <stdio.h>

int main()
{

float celsius ,farenheit;
printf("ENTER THE TEMPERATURE IN DREGREE CELSIUS : ");
scanf("%f" , &celsius);
farenheit = (celsius * 9/5) + 32 ;
printf("%.2f celsius = %.2f farenheit" , celsius , farenheit);
return 0;
}
