// Write a program to accept details of n items using structure and display the details.
#include<stdio.h>
struct Items
{
	int code;
	char name[20];
	float price;
}i1[100];
int main()
{
	int i,n;
	printf("Enter Limit=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Item Code,Name,Price=");
		scanf("%d%s%f",&i1[i].code,&i1[i].name,&i1[i].price);
	}
	for(i=0;i<n;i++)
	{
		printf("\nIntem Code=%d",i1[i].code);
		printf("\nIntem Name=%s",i1[i].name);
		printf("\nIntem Price=%.2f",i1[i].price);
	}
}
