#include<stdio.h>
void main()
{
    int i,j,num=1;
    for(i=1;i<=4;i++)
    {
        for(j=i;j<4;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        
            printf("%d ",num);
            num++;
        }
        printf("\n");
      
    }
}
/*
   1
  2 3
 4 5 6
7 8 9 10   */