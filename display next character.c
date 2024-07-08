#include<stdio.h>
int main()
{
	char ch;
	int n;
	void display(char ch,int n);
	printf("Enter chaeacter : ");
	scanf("%c",&ch);
	printf("Enter Limit : ");
	scanf("%d",&n);
	display(ch,n);
}
void display(char ch,int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%c\t",ch++);
	}
}
