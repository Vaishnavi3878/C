#include<stdio.h>
int main()
{
	int n,i;
	printf("enter number:");
	scanf("%d,&n");
	printf("table=");
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i*n);
	}
}
