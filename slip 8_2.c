#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,s,ch;
	printf("\n Enter how many rows : ");
	scanf("%d",&r);
	printf("\n Enter squre matrix : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Display Matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	do
	{
		s=0;
		printf("\n Menus : \n");
		printf("1 - Calculate sum of upper traingular matrix \n 2 - Calculate sum of diagonal matrix \n Enter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : for(i=0;i<r;i++)
			         {
			         	for(j=0;j<r;j++)
			         	{
			         	  if(i>j)
						  s=s+a[i][j];	
						}
					 }
					 printf("\n Sum of upper traingular matrix : %d\t",s);
					 break;
			case 2 : for(i=0;i<r;i++)
			         {
			         	for(j=0;j<r;j++)
			         	{
			         	  if(i==j)
						  s=s+a[i][j];	
						}
					 }
					 printf("\n Sum of diagonal matrix : %d\t",s);
					 break;
			default : printf("\n Invalid Choice..................");		 
		}
	}while(ch<3);
}
