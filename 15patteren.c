#include<stdio.h>
void main()
{
    int i,j,k,s,v;
    for(i=1;i<=6;i++)
    {
        for(s=i;s<=5;s++)
        {
            printf(" ");
        }            
        for(j=1;j<=i-j;j++)
        {
            
            printf("%d ",j);
            
        }    
         for(k=i;k>=1-k;k--)
        {
            
            printf("%d ",k+i-j);
            
        }

        printf("\n");

    }
}