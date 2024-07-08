#include<stdio.h>
struct Emp
{
	int eno;
	char ename[20];
	float salary;
}e1[100];
int main()
{
	int i,n,ch;
	printf("Enter Limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Employee no,Name,Salary:");
		scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].salary);
	}
	do
	{
    printf("\nMenu-\n1 Display all Employees\n2 Display details of all Employees having salary>20000");
	printf("\nEnter Chice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:for(i=0;i<n;i++)
		       {
		    	 printf("\nEmployee No:%d",e1[i].eno);
			     printf("\nEmployee Name:%s",e1[i].ename);
			     printf("\nEmployee Salary:%f",e1[i].salary);
			   }
			break;
		case 2:for(i=0;i<n;i++)
		       {
		       	if(e1[i].salary>20000)
		    	 printf("\nEmployee No:%d",e1[i].eno);
			     printf("\nEmployee Name:%s",e1[i].ename);
			     printf("\nEmployee Salary:%f",e1[i].salary);
			   }
			   break;
		default:printf("\nInvalid Choice......");	   	
    }
    }while(ch<3);
}
