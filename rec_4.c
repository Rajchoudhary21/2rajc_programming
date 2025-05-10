//recursion
//wap to calclate factorial of any num...
#include<stdio.h>
/*int factorial(n)
{
   static int i=1,fact=1;
   fact = fact*i;
   i++;
   if(i<n)
   {
    factorial(n);
   }
return fact;
}*/
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n * factorial(n-1);
}
void main()
{
    int n;
    printf("enter the num : ");
    scanf("%d",&n);

    factorial(n);
    printf("%d ",factorial(n));

}