#include<stdio.h>
int main()
{
	int n,*p;
	printf("enter number:");
	scanf("%d",&n);
	p=&n;
	printf("\ncube=%d",*p**p**p);
}
