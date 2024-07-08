#include<stdio.h>
int main()
{
	float a,b,AM,HM;
	printf("Enter two numbers : ");
	scanf("%f%f",&a,&b);
	AM=(a+b)/2;
	HM=a*b/(a+b);
	printf("\nArithmatic Mean = %f",AM);
	printf("\nHarmonic Mean = %f",HM);
}
