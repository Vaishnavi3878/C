#include<stdio.h>
int main()
{
	float cp,sp;
	printf("Enter Cost Price = ");
	scanf("%f",&cp);
	printf("Enter Selling Price = ");
	scanf("%f",&sp);
	if(sp>cp)
	printf("profit = %f",sp-cp);
	else
	printf("Loss = %f",cp-sp);
}
