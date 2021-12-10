#include<stdio.h>
void main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(y%x==0)
	{
		printf("%d is factor of %d ",x,y);
	}
	else
	{ 
	printf("%d is not factor of %d",x,y);
	}
}
