#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i,min,max;
	printf("\n enter how many array elements : ");
	scanf("%d",&n);
	printf("\n enter array elements ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	min=a[0];
	}
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("\n the smallest elements : %d",min);
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("\n the largest elements : %d",max);
	getch();
	return 0;
}
