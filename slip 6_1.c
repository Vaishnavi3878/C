#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter character : ");
	scanf("%c",&ch);
	printf("\n Charcter : %c",ch);
	printf("\n Previous character : %c",ch-1);
	printf("\n Next character : %c",ch+1);
}
