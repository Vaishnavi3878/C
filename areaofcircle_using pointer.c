// Accept radius and display area of circle.
#include<stdio.h>
int main()
{
	float r,*p,a;
	printf("Enter Radius : ");
	scanf("%f",&r);
	p=&r;
	a=3.14**p**p;
	printf("\n Area of circle = %.2f",a);
}
