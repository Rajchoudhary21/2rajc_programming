//function
#include<stdio.h>

void div  ()

{
    int a,b,c;
    printf("enter the num 1 : ");
    scanf("%d",&a);
    printf("enter the num 2 : ");
    scanf("%d",&b);
   c=a/b;
   printf("div = %d",c);

}
void main()
{
    printf("division program.........\n");
    div();
}