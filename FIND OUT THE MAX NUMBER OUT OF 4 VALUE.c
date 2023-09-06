#include<stdio.h>
int main()
{
	int j,a,y,d;
	printf("ENTER THE FIRST  VALUE A =");
	scanf("%d",&j);//j=a//
	printf("\nENTER THE SECOND VALUE B =");
	scanf("%d",&a);// a=b//
	printf("\nENTER THE THIRD  VALUE C =");
	scanf("%d",&y);// y=c//
	printf("\nENTER THE FOURTH VALUE D =");
	scanf("%d",&d);// d=D//
	
	if(j>a)
	{
		if(j>y)
		{
			if(j>d)
			{
				printf("A IS MAX = %d",j);
			}
			else
			{
				printf("D IS MAX = %d",d);
			}
		}
		else
		{
			printf("C IS MAX = %d",y);
		}
	}
	else
	{
		if(a>y)
		{
			if(a>d)
			{
				printf("B IS MAX = %d",a);
			}
			else
			{
				printf("D IS MAX = %d",d);
			}
		}
		else
		{
			if(d>y)
			{
				printf("D IS MAX = %d",d);
			}
			else
			{
				printf("C IS MAX = %d",y);
			}
		}
	}
}