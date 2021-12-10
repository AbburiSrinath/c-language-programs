#include<stdio.h>
void main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("%c is upper case letter ",ch);
	}
	else
	{
		printf("%c is lower case letter",ch);
	}
}
