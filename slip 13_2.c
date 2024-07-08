#include<stdio.h>
int main()
{
	int num,n1,n2,i,binary,octal,hexadecimal;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	n1=num;
	while(num>0)
	{
		binary=num%2;
		num=num/2;
		i++;
	}
	printf("binary number : %d", binary);
	n2=n1;
	while(n1>0)
	{
		octal=n1%8;
		n1=n1/8;
		i++;
	}
	printf("\n Ocatal number : ");
	while(n2>0)
	{
		hexadecimal=n2%16;
		n2=n2/16;
		i++;
	}
	printf("\n Hexadecimal number : ");
	if(hexadecimal==10)
	printf("A");
	else if(hexadecimal==11)
	printf("B");
	else if(hexadecimal==12)
	printf("C");
	else if(hexadecimal==13)
	printf("D");
	else if(hexadecimal==14)
	printf("E");
	else if(hexadecimal==15)
	printf("F");
}
