#include<stdio.h>
int main()
{
	float area,volume,l,b,h;
	printf("\n Enter length : ");
	scanf("%f",&l);
	printf("\n Enter breadth : ");
	scanf("%f",&b);
	printf("\n Enter height : ");
	scanf("%f",&h);
	area=2*((l*b)+(l*h)+(b*h));
	volume=l*b*h;
	printf("\n Surface area of cuboids = %f",area);
	printf("\n Volume of cuboids %f",volume);
}
