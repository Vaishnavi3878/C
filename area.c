#include<stdio.h>
int main()
{
	float r;
	void area(float r);
	printf("enter radius : ");
	scanf("%f",&r);
	area(r);
}
void area(float r)
{
	float a=3.14*r*r;
	printf("area of circle = %f",a);
}
