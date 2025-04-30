//function 
#include<stdio.h>

void sub()

{
    int a,b,c;
    printf("enter the num 1 : ");
    scanf("%d",&a);
    printf("enter the num 2 : ");
    scanf("%d",&b);
   c=a-b;
   printf("sub = %d",c);

}
void main()
{
    printf("Subtraction program.........\n");
    sub();
}