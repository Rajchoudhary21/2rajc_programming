#include<stdio.h>
void main()
{
 int a,b,n,A,i=1;
 printf("enter value of a : ");
 scanf("%d",&a);
 printf("enter value of b : ");
 scanf("%d",&b);
 printf("enter value of power n : ");
 scanf("%d",&n);
 for(A=1;A<=n;A++)
 {
    i=i*(a+b);
 }
 printf("%d",i);
}         