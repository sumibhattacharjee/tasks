#include<stdio.h>
main()
{
	int x,y=0,r;
	printf("enter the number to be reversed\n");
	scanf("%d",&x);
	while(x!=0)
	{
	r=x%10;
	y=y*10+r;
	x=x/10;
}
	printf("the reversed number is:%d",y);
	
}
