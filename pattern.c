#include<stdio.h>
int main()
{
int i,j,sp=-1;
for(i=4;i>=1;i--)
{
for(j=1;j<=i;j++)
printf("*");	
if(i==4)
printf("\b");
for(j=1;j<=sp;j++)
	printf(" ");
for(j=1;j<=i;j++)
printf("*");	
for(j=1;j<=i-1;j++)
printf("*");	
if(i==4)
printf("\b");
for(j=1;j<=sp;j++)
	printf(" ");
for(j=1;j<=i;j++)
printf("*");	
for(j=1;j<=i-1;j++)
printf("*");	
if(i==4)
printf("\b");
for(j=1;j<=sp;j++)
	printf(" ");
for(j=1;j<=i;j++)
printf("*");	
printf("\n");
sp=sp+2;	
}	
}
