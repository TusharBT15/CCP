#include <stdio.h>

int main()
{

float celsius ,fahrenheit;
printf("ENTER THE TEMPERATURE IN DREGREE CELSIUS : ");
scanf("%f" , &celsius);
fahrenheit = (celsius * 9/5) + 32 ;
printf("%.2f celsius = %.2f fahrenheit" , celsius , fahrenheit);
return 0;
}
