//function
#include<stdio.h>

void mul()

{
    int a,b,c;
    printf("enter the num 1 : ");
    scanf("%d",&a);
    printf("enter the num 2 : ");
    scanf("%d",&b);
   c=a*b;
   printf("mul = %d",c);

}
void main()
{
    printf("multiplication program.........\n");
    mul();
}