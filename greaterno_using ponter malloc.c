// Accept two numbers and display greater number using pointer malloc function.
#include<stdio.h>
int main()
{
	int *p1,*p2;
	p1=(int *)malloc(sizeof(int));
	p2=(int *)malloc(sizeof(int));
	printf("Enter two numbers : ");
	scanf("%d%d",p1,p2);
	if(*p1>*p2)
	printf("\n Greater Number : %d",*p1);
	else
	printf("\n Greater Number : %d",*p2);
}
