#include<stdio.h>
#include<conio.h>
main()
{
	int ch;
	float c,f;
	printf("enter choice 1:c-f and 2:f-c:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("temperature in celcius:");
		f=(c*9)/5+32;
	scanf("%f",&c);
		
		printf("%f",f);
		break;
		case 2:
		printf("temperature in fahrenheit:");
	
		c=(f-32)*5/9;
		printf("%f",c);	
		scanf("%f",&f);
		
		break;
		default:
		printf("invaltd input");
		break;
					
	}
	
	}
	
