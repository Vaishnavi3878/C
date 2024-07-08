#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("enter any number :- ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		s++;
	}
	if(s==0)
	printf("\n number is prime");
	else
	printf("\n number is not prime");
}
