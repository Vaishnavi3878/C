#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[10],i=0,n1,n2;
	printf("enter number : ");
	scanf("%d",&n);
	n1=n;
	n2=n;
	while(n>0)
	{
		a[i++]=n%2;
		n=n/2;
	}
	printf("binary no = ");
	printf("\n octal no = ");
	printf("\n Hexadecimal no. = ");
	for(i=i-1;i>=0;i--)
	{
		if(a[i]==10)
		printf("A");
		else if(a[i]==11)
		printf("B");
		else if(a[i]==12)
		printf("C");
		else if(a[i]==13)
		printf("D");
		else if(a[i]==14)
		printf("E");
		else if(a[i]==15)
		printf("F");
		else
		printf("%d",a[i]);
	}
//	while(n1>0)
//	{
//		a[i]=n1%8;
//		n1=n1/8;
//		i++;
//	}
//	printf("\n octal no = ");
//	for(i=1;i>=0;i--)
//	{	
//	    printf("%d",a[i]);
  //  }
    //while(n2>0)
    //{
    //	a[i]=n2%16;
    //	n2=n2/16;
    //	i++;
	//}
	//printf("\n Hexadecimal no. = ");
//	for(i=i-1;i>=0;i--)
//	{
//		if(a[i]==10)
//		printf("A");
//		else if(a[i]==11)
//		printf("B");
//		else if(a[i]==12)
//		printf("C");
//		else if(a[i]==13)
//		printf("D");
//		else if(a[i]==14)
//		printf("E");
//		else if(a[i]==15)
//		printf("F");
//		else
//		printf("%d",a[i]);
//	}
}
