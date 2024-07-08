#include<stdio.h>
int main()
{
	int num,digit,rem,i;
	printf("\n Enter any number : ");
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
		case 1: printf("One\n");
		          break;
		case 2: printf("Two\n");
		          break;
		case 3: printf("Three\n");
		          break;
		case 4: printf("Four\n");
		          break;
		case 5: printf("Five\n");
		          break;
		case 6: printf("Six\n");
		          break;
		case 7: printf("Seven\n");
		          break;
		case 8: printf("Eight\n");
		          break;
		case 9: printf("Nine\n");
		          break;
		case 0: printf("Zero\n");
		          break;
		default : printf("wrong input............");
	}
	}
}
