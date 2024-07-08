#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("Enter any number :- ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		s=s+i;
	}
	if(s==n)
	printf("\n Number is Prime");
	else
	printf("\n Number is Not prime");
}

