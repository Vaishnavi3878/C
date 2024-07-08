// Accept number and disply base to power.
#include<stdio.h>
int main()
{
	int x,n,i,a=1;
	printf("Enter Base and Power:");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
	  a=a*x;
	}
	printf("BASE to POWER=%d",a);
}
