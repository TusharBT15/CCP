#include<stdio.h>
int main()
{
char str1[20],str2[20],str3[50];
int i=0,j=0,k=0;
printf("enter string 1:");
scanf("%s",str1);
printf("enter string 2:");
scanf("%s",str2);
while(str1[i]!='\0')
{
str3[k]=str1[i];
i++;
k++;
}
while(str2[j]!='\0')
{
str3[k]=str2[j];
j++;
k++;
}
str3[k]!='\0';
printf("String after concatenation = %s",str3);
printf("\n Length of concatenated string = %d",k);
return 0;
}
