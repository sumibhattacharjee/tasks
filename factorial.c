#include<stdio.h>
main()
{
	int n, i,factorial;
	printf("enter the integer:");
	scanf("%d",&n);
	if(n<0)
	printf("error,factorial doesnot exist number is negative");
	
	else
	{
		for(i=1;i<n;++i)
		{
			factorial*=i;
		}
		printf("factorial of %d=%llu",n,factorial);
	}
}
