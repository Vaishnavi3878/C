#include<stdio.h>
int main()
{
	int x,y;
	printf("\n Enter x quadrant : ");
	scanf("%d",&x);
	printf("\n Enter y quadrant : ");
	scanf("%d",&y);
	if(x>0&&y>0)
	printf("\n First Quadrant");
	else if(x<0&&y>0)
	printf("\n Second Quadrant");
	else if(x<0&&y<0)
	printf("\n Third Quadrant");
	else if(x>0&&y<0)
	printf("\n Fourth Quadrant");
}
