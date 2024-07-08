// Accept number and check palindrome or not.
#include<stdio.h>
int main()
{
	int n,d,r=0,n1;
	printf(" Enter Number :- ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		r=r*10+d;
	}
	if(r==n1)
	printf("Number is PALINDROME");
	else
	printf("Number is not PALINDROME");
}
