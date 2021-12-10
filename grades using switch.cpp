#include<stdio.h>
main()
{
	int a;
	printf("enter the marks");
	scanf("%d",&a);
	switch(a)
	{
		case '100-90':
			printf("A");
		break;	
		case '90-80':
			printf("B");
		break;
		case '80-70':
			printf("C");
		break;	
		case '70-60':
			printf("D");
		break;
		case '60-50':
			printf("E");
		break;
		default:
			printf("F");
					
	}
}
