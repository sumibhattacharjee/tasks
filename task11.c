#include<stdio.h>
main()
{
	char book[300];
	char author[300];
	char genre[300];
	printf("enter the name of the book:\n");
	scanf("%s",&book);
	printf("enter the name of the author:\n");
	scanf("%s",&author);
	printf("enter the genre:");
	scanf("%s",&genre);
	printf(" the details of your book is:\n%s\n%s\n%s",book,author,genre);
	
}
