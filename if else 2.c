// Write a programm to check number is divisible by 7 and 5.
#include<stdio.h>
int main()
{
	int n;
	printf("enter number= ");
	scanf("%d",&n);
	if(n%7==0&&n%5==0)
	printf("\n Number is Divisible by 7 and 5");
	else
	printf("\n Number is Not Divisible by 7 and 5");
}
