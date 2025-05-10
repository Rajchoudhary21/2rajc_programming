//Wap to check how many numbers is even & odd between 77-165.
#include<stdio.h>
void evenOdd(int n1,int n2)
{
   static int c=0;
    if(n1 % 2 == 0)
    {
        c++;
        evenOdd(n1+1,n2);
    }
    if(n1==n2)
    {
        return c;
    }
   





   /*for(i=77;i<=165;i++)
    {
        if(i%2==1)
        {
            p++;
        }
        if(i%2==0)
        {
            c++;
        }*/
       
    }

void main()
{
    int e = evenOdd(65,177);
    printf("%d num is even in range 77 - 165:%d ",e);
   
}