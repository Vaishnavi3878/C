#include<stdio.h>
int main()
{
	int a,b,*x,*y;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	x=&a;
	y=&b;
	printf("\nbefore swapping\na=%d\nb=%d",a,b);
	printf("\n\nAfter swapping\na=%d\nb=%d",*y,*x);
}
