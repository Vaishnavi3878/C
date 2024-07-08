#include<stdio.h>
int main()
{
	float r,area,circum;
	printf("\n Enter Radius : ");
	scanf("%f",&r);
	area=3.14*r*r;
	circum=2*3.14*r;
	printf("\n Area of circle : %f",area);
	printf("\n Circumference of circle : %f",circum);
}
