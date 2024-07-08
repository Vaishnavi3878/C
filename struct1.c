#include<stdio.h>
#include<string.h>
struct stud
{
	int rno;
	char name[20];
	float per;
}s1[100],t;
int main()
{
int n,i,j,k;
char name;
printf("Enter Limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\nEnter rno, name, percentage:");
	scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
}
printf("\nEnter Name to Search Record:");
scanf("%s",&name);
for(i=0;i<n;i++)
{
	k=strcmp(s1[i].name,name);
	if(k==0)
        {
        printf("\n Student Roll No=%d",s1[i].rno);
        printf("\n Student Name=%s",s1[i].name);
        printf("\n Student Percentage=%f",s1[i].per);	
		}
}
}
