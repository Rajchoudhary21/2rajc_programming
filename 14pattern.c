#include<stdio.h>
void main()
{
    int i,s,j,k;
    for(i=1;i<=5;i++)
    {
        for(s=i;s<5;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i-1;j++)
        {
            printf("%d",j);
        }
        for(k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");

    }
    
}
/*
    1
   121
  12312
*/