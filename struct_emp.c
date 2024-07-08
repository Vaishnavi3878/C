// Create structure employee and display whose percentage greater then 10000.
#include<stdio.h>
struct Emp
{
	int eno;
	char ename[20];
	float salary;
}e1[100];
int main()
{
	int i,n;
	printf("Enter Limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Employee no,Name,Salary:");
		scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].salary);
	}
	for(i=0;i<n;i++)
	{
		if(e1[i].salary>10000)
		{
			printf("\nEmployee No:%d",e1[i].eno);
			printf("\nEmployee Name:%s",e1[i].ename);
			printf("\nEmployee Salary:%f",e1[i].salary);
		}
	}
}
