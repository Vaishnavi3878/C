#include<stdio.h>
int main()
{
	int a,b,temp,ch;
	float AM,HM;
	printf("\n Enter two numbers : ");
	scanf("%d%d",&a,&b);
	do
	{
	printf("\n-----------------------------------------------");
	printf("\n Menus :- \n1 - Swap the values of two variables \n2 - Calculate arithmatic mean harmonic mean of two numbers  ");
	printf("\n-----------------------------------------------");
	printf("\n Enter Choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
	   case 1 : printf("\n Before swapping a and b is a = %d b = %d",a,b);
	            temp=a;
	            a=b;
				b=temp;
				printf("\n After swapping a and b is a = %d b = %d",a,b);
				break;
	   case 2 : AM=a+b/2;
	            HM=a*b/a+b;
				printf("\n Arithmatic mean = %f",AM);
				printf("\n Harmonic mean = %f",HM);
				break;
	   default : printf("\n Invalid choice..........");				
	}
    }while(ch<3);
}
