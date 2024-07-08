// Accept two numbers and display addition using pointer.
#include<stdio.h>
int main()
{
	int n1,n2,c,*p1,*p2;
	printf("Enter two nos : ");
	scanf("%d%d",&n1,&n2);
	p1=&n1;
	p2=&n2;
	c=*p1+*p2;
	printf("Addition = %d",c);
}
