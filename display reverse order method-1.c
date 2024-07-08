// Accept number and display reverse order.
#include<stdio.h>
int main()
{
	int n,d,s=0;
	printf(" Enter Number :- ");
	scanf("%d",&n);
	while(n>0)
	{
		printf("%d",n%10);
		n=n/10;
	}
}
