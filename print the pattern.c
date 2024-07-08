#include<stdio.h>
void main()
{
	int n,i,j,l,s;
	printf("Enter n value = ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=-n;j<=n;j++)
		{
			if(-i<j&&j<i)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
}
