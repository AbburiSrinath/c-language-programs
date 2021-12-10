#include<stdio.h>
main()
{
	float a,b,area ,perimeter;
	printf("enter the value for a of a rectangle ");
	scanf("%f",&a);
	printf("enter the value for b of a rectangle");
	scanf("%f",&b);
	area=a*b;
	printf("area of a rectangle,%f",area);
	perimeter=2*(a+b);
	printf("perimeter of a rectangle,%f,perimeter");
}
