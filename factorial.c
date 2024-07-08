#include<stdio.h>
int main()
{
	int n;
	void factorial(int n);
	printf("Enter Number = ");
	scanf("%d",&n);
	factorial(n);
}
void factorial(int n)
{
	int f=1;
	while(n>0)
	{
		f=f*n;
		n--;
	}
	printf("Factorial = %d",f);
}
