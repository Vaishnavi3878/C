// write a program to accept a number and cunt number of even, odd and zero digits whitin the number.
#include<stdio.h>
int main()
{
	int n,even=0,odd=0,zero=0,d;
	printf("Enter Number : ");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		if(d==0)
		zero++;
		else if(d%2==0)
		even++;
		else
		odd++;
	}
	printf("zero digit count = %d",zero);
	printf("\n even digit count = %d",even);
	printf("\n odd digit count = %d",odd);
}
