#include<stdio.h>
#define max 5
struct stack
{
	int a[max];
	int top;
}s1;
void init()
{
	s1.top=-1;
}
int isempty()
{
	if(s1.top==-1)
	return 1;
	else
	return 0;
}
int isfull()
{
	if(s1.top==max-1)
	return 1;
	else 
	return 0;
}
void push(int num)
{
	if(isfull())
	printf("\nstack is full don't push.............");
	else
	{
	s1.top++;
	s1.a[s1.top]=num;
	printf("push successfully..........");
    }
}
void pop()
{
	int val;
	if(isempty())
	printf("\n\nstack is empty don't pop..........");
	else
	{
	val=s1.a[s1.top];
	s1.top--;
	printf("\npoped value=%d",val);
    }
}
void disp()
{
	int i;
	for(i=s1.top;i>=0;i--)
	printf("%d\n",s1.a[i]); 
}
int main()
{
	int num,ch;
	init;
	do
	{
		printf("\n\n1-push \n2-pop \n3-display \nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nEnter number:");
			       scanf("%d",&num);
			       push(num);
			       break;
			case 2:pop();
			       break;
			case 3:disp();
			       break;
			default:printf("\nInvalid choice.......");	   	          
		}
	}while(ch<4);
}
