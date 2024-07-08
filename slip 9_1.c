#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter any character : ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	printf("\n character is vowel");
	else 
	printf("\n character is consonent");
}
