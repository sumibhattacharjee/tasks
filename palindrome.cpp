#include<stdio.h>
main()
{
char str[100];
int i=0,j;
int length=0;
printf("enter any string");
scanf("%s",str);
while(str[i]!='\0')
{
	length++;
	i++;
}
i=0;
j=length-1;
while(i<=length/2)
{
	i++;
	j--;
	
}

if (i>=j)
printf("string is palindrome");
else
printf("string is not palindrome");


}
