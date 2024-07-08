#include<stdio.h>
int main()
{
	char s1[20];
	int i,cnt1=0,cnt2=0;
	printf("Enter String : ");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]=='a'||s1[i]=='A')
		cnt1++;
		if(s1[i]=='u'||s1[i]=='U')
		cnt2++;
	}
	printf("\nA count=%d",cnt1);
	printf("\nU count=%d",cnt2);
}
