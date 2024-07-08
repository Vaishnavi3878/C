// Accept number and reverse it using pointer.
#include<stdio.h>
int main()
{
	int n,*p,d,r=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	p=&n;
	while(*p>0)
	{
		d=*p%10;
		r=r*10+d;
		*p=*p/10;
	}
	printf("Reverse No : %d",r);
}
