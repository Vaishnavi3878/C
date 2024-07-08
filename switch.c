#include<stdio.h>
int main()
{
	int num,rem=0,digit;
	printf("Enter any number : ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=rem*10+num%10;
		num=num/10;
	}
	while(rem>0)
	{
		digit=rem%10;
		rem=rem/10;
		switch(digit)
		{
			case 1 : printf("One\t");
			         break;
			case 2 : printf("Two\t");
			         break;
			case 3 : printf("Three\t");
			         break;
			case 4 : printf("Four\t");
			         break;
			case 5 : printf("Five\t");
			         break;
			case 6 : printf("Six\t");
			         break;
			case 7 : printf("Seven\t");
			         break;
			case 8 : printf("Eight\t");
			         break;
			case 9 : printf("Nine\t");
			         break;
			case 0 : printf("Zero\t");
			         break;		          
		}
	}
}
