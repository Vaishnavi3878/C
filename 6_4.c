#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n=0;
	printf("enter hoe many rows and cols : ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
