//no return type but with arguement factorial 
#include<stdio.h>
void factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d = %d ",n,fact);
} 
void main()
{
    int n;
    printf("enter the nuum : ");
    scanf("%d",&n);
    factorial(n);
}