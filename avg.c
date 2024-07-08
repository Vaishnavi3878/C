#include<stdio.h>
int main()
{
	int i,n,s=0,avg;
	printf("\n Enter Limit :- ");
	scanf("%d",&n);
	printf("\n Even Numbers :- ");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
			s=s+i;
		}
	}
	avg=s/n;
	printf("\n Avg=%d",avg);
}
