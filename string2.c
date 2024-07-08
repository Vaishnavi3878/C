#include<stdio.h>
int main()
{
	char s1[100],ch;
	int i,cnt=0;
	printf("Enter String : ");
	gets(s1);
	printf("\nEnter any Character : ");
	scanf("%c",&ch);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>ch)
		cnt++;
	}
	printf("\nCount : %d",cnt);
}
