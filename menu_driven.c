#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[20];
	int per;
}s1[100];
int i,n;
void accept();
void dispAll();
void searchbyno(int num);
void searchbyname(char nm[20]);
void disp_max();
void disp_avg_per();
int main()
{
	int ch,num;
	char nm[20];
	float avg;
	do
	{
		printf("\n\n1-Accept\n2-Display All\n3-Search by No\n4-Search by Name\n5-Max Percentage\n6-Average Percentage\n\nEnter Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:accept();
			     break;
			case 2:dispAll();
			     break;
			case 3:printf("Enter Number to search:");
			       scanf("%d",&num);
				   searchbyno(num);
				   break;
			case 4:printf("Enter Name to search:");
			       scanf("%s",&nm);
				   searchbyname(nm);
				   break;
			case 5:disp_max();
			       break;
			case 6:disp_avg_per();
			       break;	  
			default:printf("\n Invalid Choice....");	    	   	      
		}
	}while(ch<7);
}
void accept()
{
	printf("\nEnter Limit:");
	scanf("%d",&n);
	printf("\nEnter Rollno Name Percentage:");
	for(i=0;i<n;i++)
	{
		scanf("%d%s%d",&s1[i].rno,&s1[i].name,&s1[i].per);
	}
}
void dispAll()
{
	for(i=0;i<n;i++)
	{
		printf("\nRoll No=%d",s1[i].rno);
		printf("\nName=%s",s1[i].name);
		printf("\nper=%d",s1[i].per);
	}
}
void searchbyno(int num)
{
	for(i=0;i<n;i++)
	{
		if(s1[i].rno==num)
		{
			printf("\nName=%s",s1[i].name);
			printf("\nPercentage=%d",s1[i].per);
		}
	}
}
void searchbyname(char nm[20])
{
	for(i=0;i<n;i++)
	{
		if(strcmp(s1[i].name,nm)==0)
		{
			printf("\nRoll no=%d",s1[i].rno);
			printf("\nPercentage=%d",s1[i].per);
		}
	}
}
void disp_max()
{
	int max;
	max=s1[0].per;
	for(i=0;i<n;i++)
	{
		if(s1[i].per>max)
		max=s1[i].per;
	}
	printf("\nMaximum Percentage=%d",max);
}
void disp_avg_per()
{
	int sum=0;
	float avg;
	for(i=0;i<n;i++)
	{
		sum=sum+s1[i].per;
	}
	avg=sum/n;
	printf("\nAverage Percentage=%f",avg);
}

