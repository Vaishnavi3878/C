// Accept year and check Leap year or not using pointer.
#include<stdio.h>
int main()
{
	int y,*p;
	printf("Enter any Year : ");
	scanf("%d",&y);
	p=&y;
	if(*p%4==0)
	printf("\n Year is Leap Year.");
	else
	printf("\n Year is not Leap year.");
}
