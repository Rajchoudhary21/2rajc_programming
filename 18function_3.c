//with return type  but no arguement factorial 
#include<stdio.h>
int factorial()
{
    int n,i,fact=1;
    printf("enter the nuum : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
   return fact;
} 
void main()
{
   
    printf("factorial  %d ",factorial());
}