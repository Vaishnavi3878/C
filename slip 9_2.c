#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	printf("\n enter two numbers as a range : ");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=10;i++)
	{
		for(j=n1;j<=n2;j++)
		{
			printf("%dx%d=%d\t",j,i,i*j);
		}
		printf("\n");
	}
}
