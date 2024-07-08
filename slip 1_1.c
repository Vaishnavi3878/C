#include<stdio.h>
int main()
{
	float r, h, v,s;
	printf(" \n enter radius : ");
	scanf("%f",&r);
	printf("enter height : ");
	scanf("%f",&h);
	s=2*3.14*r*h+2*3.14*r*r;
	v=3.14*r*r*h; 
	printf("\n surface area of cylinder : %f",s);
	printf("\n valume of cylinder : %f",v);
}
