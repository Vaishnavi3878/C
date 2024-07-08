#include<stdio.h>
int main()
{
	int a[100],i,n,s=0;
	printf("Enter Limit :- ");
	scanf("%d",&n);
	printf("\n Enter n Numbers :- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
//	printf("\n Prime Numbers :- ");
	for(i=2;i<n;i++)
	{
		if(a[i]%i==0)
		s=s+a[i];
//		printf("%d\t",s);
	}
	printf("\n Prime Numbers :- %d",s);
}
