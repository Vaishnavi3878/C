#include<stdio.h>
int main()
{
	char s1[100],ch;
	int i,cnt=0;
	printf("\n Enter string : ");
	gets(s1);
	printf("\n Enter Character to search : ");
	scanf("%c",&ch);
	for(i=0;s1[i]!='\o';i++)
	{
		if(s1[i]==ch)
		cnt++;
	}
	printf("\n occurence of character : %d",cnt);
}
