#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i,j,temp;
	printf("\n enter how many array elements : ");
	scanf("%d",&n);
	printf("\n enter array elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n the started array is \n");
	for(i=0;i<n;i++)
	printf("\t %d",a[j]);
	getch();
	return 0;
}
