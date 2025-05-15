//Wap to print transpose of matrix.

#include<stdio.h>
void main()
{
  int i,j,Matrix[2][2]={{2,2},{4,6}};
  printf("matrix elements : \n");
  
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
        printf("%d ",Matrix[i][j]);
    }
    printf("\n");
  }
   printf("transpose matrix elements : \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
        printf("%d ",Matrix[j][i]);
    }
    printf("\n");
  }
}