//with return type  with arguement factorial 
#include<stdio.h>
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
   return fact;
} 
void main()
{
    int n;
    printf("enter the nuum : ");
    scanf("%d",&n);
    printf("factorial of %d = %d ",n,factorial(n));
}