// print the following pattern
// 12345
// 1234
// 123
// 12
// 1
#include<stdio.h>
int main()
{
  int row,col;
  for(row=5;row>=1;row--)
  {
    for(col=1;col<=row;col++)
    {
      printf("%d",col);
    }
     printf("\n");
  }
}
