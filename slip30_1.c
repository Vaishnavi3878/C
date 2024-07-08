// write a program to find sum of digit of a given input number using user defined functiom.
#include<stdio.h>
int sum_digit(int n)
{
	int s=0,d;
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	return s;
}
int main()
{
	int n,s;
	printf("Enter Number : ");
	scanf("%d",&n);
	s=sum_digit(n);
	printf("sum of digit = %d",s);
}
