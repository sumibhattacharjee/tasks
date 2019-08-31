#include<stdio.h>
main()
{
	char name[40];
	char lastname[100];
	 char fullname[140];
	int i=0, j=0;
	printf("enter your first name:\n");
	scanf("%s",&name);
	printf("enter your last name:\n");
	scanf("%s",&lastname);
	while(name[i]!='\0')
	{
		fullname[i]=name[i];
		i++;
	}
	while(lastname[j]!='\0')
	{
		fullname[i]=lastname[j];
		i++;
		j++;
		
	}
	lastname[i]='\0';
	printf("your full name is:%s",fullname);
		
	}
	
	
	
	

