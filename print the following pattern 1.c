// print thr following pattern.
// ******
// ******
// ******
// ******
#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=6;col++)
		{
			printf("*");
		}
		printf("\n");
	}
}
