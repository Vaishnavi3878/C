// Accept number and display factors
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter Number:");
	scanf("%d",&n);
	printf("Factors :-");
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		printf("%d\t",i);
	}
}
