// Accept number and display reverse order.
#include<stdio.h>
int main()
{
	int n,d,r=0;
	printf("Enter Number :- ");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		r=r*10+d;
	}
	printf(" Revers Number :- %d",r);
}
