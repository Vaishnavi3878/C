// Accept number and check prime or not.
#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("Enter NO :-");
	scanf("%d",&n);
	for (i=2;i<n;i++)
	{
		if(n%i==0)
		{
		s=1; break;
	    }
	}
	if(s==0)
	printf("Number is Prime");
	else
	printf("Number is not Prime");
}
