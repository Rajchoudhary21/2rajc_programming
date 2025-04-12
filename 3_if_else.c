//wap to find maximum between two numbers........
#include<stdio.h>
void main()
{
    int num1,num2;
    printf("enter a num1:");
    scanf("%d",&num1);
    printf("enter a num2 :");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("num1 is maximum....");
    }
    else if (num2>num1)
    {
        printf("num2 is maximum.....");

    }
    else
    {
        printf("both number are equal");
    }
    
}