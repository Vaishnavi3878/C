#include<stdio.h>
int main()
{
	int n;
	void digitsum(int n);
	printf("Enter number");
	scanf("%d",&n);
	digitsum(n);
}
void digitsum(int n)
{
	int d,s=0;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		s=s+d;
	}
	printf("\n sum of digit=%d",s);
}
