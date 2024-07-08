#include<stdio.h>
void factorial(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++);
	{
		f=f*i;
	}
	printf("\n factorial=%d",f);
}
int main()
{
	int x;
	printf("\n Enter Number : ");
	scanf("%d",&x);
	factorial(x);
}
