// write a program to accept a character,an interger n and display the next n characters.
#include<stdio.h>
int main()
{
	int n,i;
	char ch;
	printf("Enter Character :-");
	scanf("%c",&ch);
	printf("Enter Limit :-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%c\t",ch++);
	}
}
