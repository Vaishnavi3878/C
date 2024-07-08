#include<stdio.h>
int main()
{
	void swap(int a, int b);
	int a,b;
	printf("enter two numbers : ");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
void swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
	printf("\nafter swapping a=%d",a);
	printf("\nafter swapping b=%d",b);
}
