// print sum of 1 to 10 even and odd numbers...
#include<stdio.h>
int main()
{
	int i,es=0,os=0;
	for(i=1;i<=10;i=i+1)
	{
		if(i%2==0)
		es=es+i;
		else
		os=os+i;
	}
	printf("\n Even sum=%d",es);
	printf("\n Odd sum=%d",os);
}
//print sum of 10 to 50 divisible by three numbers
//write a program to print 1st natural numbers
//write a program to accept an integer n and display all even numbers upto n
