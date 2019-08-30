#include<stdio.h>
main()
{
	int x,sum=0,r,c,temp;
	printf("enter the number");
	scanf("%d",&x);
	temp=x;
	while(x>0){
	
	r=x%10;
	c=r*r*r;
	sum=sum+c;
	x=x/10;
}
x=temp;
if(x==sum)
printf(" it is an amstrong number");
else
printf( "it is not an amstrong number");
	
	}


	
	

