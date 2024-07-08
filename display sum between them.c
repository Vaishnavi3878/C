// display sum of numbers between them.
#include<stdio.h>
int main()
{
	int x,y,i,s=0;
	printf("Enter Two Numbers :-");
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		s=s+i;
	}
	printf("SUM=%d",s);
}
