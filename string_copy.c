#include<stdio.h>
int main()
{
char str1[20],str2[20];
int i=0,j=0;
printf("Enter the String:");
scanf("%s",str1);
while(str1[i]!='\0')
{
str2[i]=str1[i];
i++;
}
str2[i]!='\0';
printf("Copied String : %s",str2);
printf("\n Length of the string = %d",i);
return 0;
}
