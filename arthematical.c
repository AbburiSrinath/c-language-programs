#include<stdio.h>
void main()
{
	char ch;
	scanf("%c",&ch);
	if((ch=='+')||(ch=='-')||(ch=='/')||(ch=='*')||(ch=='%'))
	{
		printf("%c is a arthematical operator",ch);
	}
	else
	{
		printf("%c is not arthematical operator",ch);
		
	}
}

