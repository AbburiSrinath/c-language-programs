#include<stdio.h>
main()
{
	int a,b,c;
	printf("a is smallest number");
	scanf("%d %d %d",&a,&b,&c);
	if (a<b&&a<c)
	{
		printf("a is smallest number");
	}
	else if(b<c&&b<a)
	{
		printf("b is smallest");
	}
	else
	{
		printf("c is smallest");
	}
}
