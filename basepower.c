#include<stdio.h>
int main()
{
	int x,y;
	void basepower(int x,int y);
	printf("Enter value of x and y");
	scanf("%d%d",&x,&y);
	basepower(x,y);
}
void basepower(int x,int y)
{ int a=1;
 while(y>0)
 {
	a=a*x;
	y--;
 }
 printf("Base to Power = %d",a);
}
