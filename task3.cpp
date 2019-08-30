#include<stdio.h>
main()
{
	int marks1=0, marks2=0, marks3=0,sum=0,avg;
	printf("enter the marks in physics:");
	scanf("%d",&marks1);
	printf("enter the marks in biology:");
	scanf("%d",&marks2);
	printf("enter the marks in mathematics:");
	scanf("%d",&marks3);
	sum=marks1+marks2+marks3;
	avg=sum/3;
	printf("your total marks is:\n%d\n",sum);
	printf("your average marks is:\n%d\n",avg);
	
}
