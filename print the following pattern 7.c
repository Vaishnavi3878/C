// print the following pattern
// 55555
// 4444
// 333
// 22
// 1
#include<stdio.h>
int main()
{
  int row,col;
  for(row=5;row>=1;row--)
  {
    for(col=1;col<=row;col++)
    {
      printf("%d",row);
    }
     printf("\n");
  }
}
