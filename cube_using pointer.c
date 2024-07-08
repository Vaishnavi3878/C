// Accept number and display cute using pointer.
#include<stdio.h>
int main()
{
	int n,*p,c;
	printf("Enter Number : ");
	scanf("%d",&n);
	p=&n;
	c=*p;
	printf("\n Cube : %d",c*c*c);
}
