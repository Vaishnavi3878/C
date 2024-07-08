#include<stdio.h>
#include<conio.h>
int main()
{
	char str1[20],str2[20];
	int i;
	printf("\n Enter any String :- \n");
	scanf("%s",str1);
	for(i=0;str1[i]!='\o';i++)
	{
		str2[i]=str1[i];
	}
	printf("After copying string2 is %s:- ",str2);
	getch();
	return 0;
}
