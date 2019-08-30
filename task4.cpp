#include<stdio.h>
main()
{
	char name[40];
	printf("enter your first name:");
	scanf("%s",&name);
	char lastname[100];
	printf("enter your last name:");
	scanf("%s",&lastname);
	printf("your full name is:%s %s",name,lastname);
	
}
