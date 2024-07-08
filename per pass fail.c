#include<stdio.h>
int main()
{
int m1,m2,m3,t;
float avg;
printf("Enter three subject marks = ");
scanf("%d%d%d",&m1,&m2,&m3);
t=m1+m2+m3;
avg=(float)t/3;
if(avg>=70)
printf("\n first class per = %f",avg);
else if(avg>60)
printf("\n second class = %f",avg);
else if(avg>40)
printf("\n pass per = %f",avg);
else
printf("\n fail per = %f",avg);
}
