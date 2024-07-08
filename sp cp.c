#include<stdio.h>
int main()
{
	int cp,sp;
	printf("Enter Cost Price & Selling Price = ");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	printf("\n seller has made a profit=%d",sp-cp);
	else
	printf("\n seller has made loss=%d",cp-sp);
}
