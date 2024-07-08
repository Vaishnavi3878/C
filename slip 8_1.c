#include<stdio.h>
int main()
{
	int rs;
	printf("\n enter the amount : ");
	scanf("%d",&rs);
	printf("\n 10 rs notes = %d",rs/10);
	rs=rs%10;
	printf("\n 5 rs notes = %d",rs/5);
	printf("\n 1 rs notes = %d",rs%5);
}
