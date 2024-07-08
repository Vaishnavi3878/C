#include<stdio.h>
#include<canio.h>
int main()
{
	char ch;
	int a,b,c;
	printf("Enter two nos:");
	scanf("%d%d",&a,&b);
	printf("Enter choice-case: +,-,*,/");
	ch=getch();
	switch(ch)
	{
		case '+'  :   c=a+b;
		                    printf("\naddition=%d",c);
		                    break;
		case '-'  :   c=a-b;
		                    ptintf("\nsubstraction=%d",c);
		                    break
		case '*'  :   c=a*b;
		                    printf("\nmultiplication=%d",c);
							break
		case '/'  :   c=a/b;
		                    printf("\ndivision=%d",c);
							break				                    
							                     
	}
}
