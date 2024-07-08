#include<stdio.h>
int main()
{
	int *a[100],n,i,min,max;
	printf("Enter Limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Numbers = ");
		scanf("%d",a+i);
	}
	min=*(a+0);
	max=*(a+0);
	for(i=1;i<n;i++)
	{
		if(*(a+i)<min)
		min=*(a+i);
		if(*(a+i)>max)
		max=*(a+i);
	}
	printf("\n Minimum no = %d",min);
	printf("\n maximum no = %d",max);
}
