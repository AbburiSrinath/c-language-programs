#include<stdio.h>
main()
{
	float p,t,r,simpleinterest;
	printf("enter the value for p");
	sacnf("%f",&p);
	printf("enter the value for t");
	scanf("%f",&t);
	printf("enter the value for r");
	scanf("%f",&r);
	simple interest=(p*t*r)/100;
	printf("simple interest,%f",simple interest);
}

