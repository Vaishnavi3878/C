// disply square and cube of first n numbers with multiplication table
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter Limit :-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n SQUARE of %d:- %dx%d=%d      and     CUBE of %d:- %dx%dx%d=%d",i,i,i,i*i,i,i,i,i,i*i*i);
	}
}
