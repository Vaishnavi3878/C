#include<stdio.h>
int main()
{
	int n,i,f=0,s=1,t;
	printf("\n Enter Limit :- ");
	scanf("%d",&n);
	printf("Febonaccie Series=%d\t%d",f,s);
	for(i=1;i<n;i++)
	{
		t=f+s;
		printf("\t%d",t);
		f=s;
		s=t;
	}
}
