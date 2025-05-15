//Write a program to find the sum of the right diagonals of a matrix

#include<stdio.h>
void main()
{
  int i,j,Matrix[3][3]={{5,8,6},{4,8,6},{8,6,3}};
  printf("matrix elements : \n");
  
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        printf("%d ",Matrix[i][j]);
    }
    printf("\n");
  }
  printf("right diagonal of matrix : \n");
 
for(i=0;i<3;i++)
  {
    printf("%d ",Matrix[i][(3-1)-i]);
  }
  printf("\n");
  }
