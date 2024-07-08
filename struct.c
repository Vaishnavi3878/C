#include<stdio.h>
struct stud
{
	int rno;
	char name[20];
	float per;
}s1[100],t;
int main()
{
int n,i,j,min,pos;
printf("Enter Limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\nEnter rno, name, percentage:");
	scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
}
min=s1[0].per;
pos=0;
for(i=0;i<n;i++)
{
	if(s1[i].per<min)
	{
		min=s1[i].per;
		pos=i;
	}
}
printf("\n Student Roll No=%d",s1[pos].rno);
printf("\n Student Name=%s",s1[pos].name);
printf("\n Student Percentage=%f",s1[pos].per);
}
