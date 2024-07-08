//write a program to accept and display details of 5 students using structure.
#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	float per;
}s1[100];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter Roll No,Name,Percentage:");
		scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
	}
	for(i=0;i<5;i++)
	{
		printf("\nStudent Roll No=%d",s1[i].rno);
		printf("\nStudent Name=%s",s1[i].name);
		printf("\nStudent Percentage=%.2f",s1[i].per);
	}
}
