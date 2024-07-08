#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i;
	printf("\n enter how many array elements");
	scanf("%d",&n);
	printf("\n enter array elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("\n original array \n");
		for(i=0;i<n;i++)
		printf("\t %d",a[i]);
		printf("\n Reverse Array : \n");
		for(i=n-1;i>=0;i--)
		getch();
		return 0;
}
