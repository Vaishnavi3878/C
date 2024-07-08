#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],ans[10][10],i,j,r,c;
	printf("Enter how many rows and cols : ");
	scanf("%d%d",&r,&c);
	printf("\n enter first matrix : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter second matrix : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ans[i][j]=a[i][j]*b[i][j];
		}
	}
	printf("\n multiplication of matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",ans[i][j]);
		}
	}
}
