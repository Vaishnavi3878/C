#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i,sum=0;
	printf("\n enter how many array elements");
	scanf("%d",&n);
	printf("\n enter array elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		sum=sum+a[i];
	}
	printf("\n sum of odd elements of array =%d",sum );
	getch ();
	return 0;
	
}
