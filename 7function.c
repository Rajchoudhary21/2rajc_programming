//function even_odd...
#include<stdio.h>

void even_odd()

{
    int a;
    printf("enter the num  : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the num is even");
    }
    else
    {
        printf("the num is odd");
    }
    

}
void main()
{
    printf("check even or odd number program.........\n");
    even_odd();
}
