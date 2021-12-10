#include<stdio.h>
main()
{
	char a;
	printf("enter the symbol");
	scanf(" %c",&a);
	switch(a)
	{
		case '0'...'9':
			printf("these are numbers");
			break;
		case 'a'...'z':
			printf("these are lowercasecharacters");
			break;
		case 'A'...'Z':
			printf("these are uppercasecharacters");
			break;
		default:
			printf("these are special symbols");
	}
}
