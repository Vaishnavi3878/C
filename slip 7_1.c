#include<stdio.h>
#include<math.h>
int main()
{
  float x1,y1,x2,y2,distance;
  printf("\n Enter coordinates of point 1 : ");
  scanf("%f%f",&x1,&y1);
  printf("\n Enter Coordinates of point 2 : ");
  scanf("%f%f",&x2,&y2);
  distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  printf("\n Distance between point 1 and point 2 : %f",distance);	
}
