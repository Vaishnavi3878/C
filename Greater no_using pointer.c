// Accept two numbers and display greater number using pointer.
#include<stdio.h>
int main()
{
	int a,b,*p1,*p2;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(*p1>p2)
	printf("\n Greater Number : %d",*p1);
	else
	printf("\n Greater Number : %d",*p2);
}
