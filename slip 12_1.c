#include<stdio.h>
int main ()
{
	int n,d,s=0;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	while(n>0)
	{
	  d=n%10;
	  s=s+d;
	  n=n/10; 	
	}
	printf("\n sum of digit of given number : %d",s);
}
