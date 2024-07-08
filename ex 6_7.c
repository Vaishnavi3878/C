#include<stdio.h>
int main()
{
	int n,i,digit;
	printf("Enter limit :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		digit=i%10;
		n=n+(digit*digit*digit);
		if(i==n)
		printf("%d\t",i);
	}
}
