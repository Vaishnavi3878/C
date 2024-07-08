// print sum of 1 to 10 even numbers....
#include<stdio.h>
int main()
{
	int i,s=0;
	//for(i=2;i<=10;i=i+2)
	for(i=1;i<=10;i=i+1)
	{
    if(i%2==0)
	{
		s=s+i;
	}
	}
	printf("\n sum=%d",s);
}
