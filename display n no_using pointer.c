// Accept n numbers and display using pointer.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("Enter Limit : ");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("Enter n Numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\n Display Nos : ");
	for(i=0;i<n;i++)
	{
	printf("%d\t",*(p+i));
    }
}
