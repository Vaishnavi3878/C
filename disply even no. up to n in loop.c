// disply evern numbers up to n . 
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter Limit:");
    scanf("%d",&n);
    printf("Even Nos=");
    for(i=2;i<=n;i=i+2)
    {
      printf("%d\t",i);
    }
}
