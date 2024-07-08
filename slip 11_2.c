#include<stdio.h>
int main()
{
	float area,circum,volume,r;
	int ch;
	printf("\n enter radius : ");
	scanf("%f",&r);
	printf("Menus :- \n");
	printf("1 - Area of circle \n2 - Circumference of circle\n3 - Volume of spare\nEnter chice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : area=3.14*r*r;
		         printf("\n Area of circle : %f", area);
		         break;
		case 2 : circum=2*3.14*r;
		         printf("\n Circumference of circle : %f",circum);
		         break;
		case 3 : volume=(4/3)*3.14*r*r*r;
		         printf("\n Volume of spare : %f",volume);
		         break;
		default : printf("Invalid choice...............");         
	}
}
