#include<stdio.h>
int main()
{
	float cp,sp;
	printf("\n enter cost price : ");
	scanf("%f",&cp);
	printf("\n enter selling price : ");
	scanf("%f",&sp);
	if(cp<sp)
	printf("\n Seller has made PROFIT : %2f",sp-cp);
	else
	printf("\n Seller has made LOSS : %2f",cp-sp);
}
