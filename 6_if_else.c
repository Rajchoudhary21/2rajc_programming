//2. write a program to accept two integer and chek whether they are equal or not......
#include<stdio.h>
void main()
{
    int num1,num2;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    if(num1==num2)
    {
        printf("nums are equal");

    }
    else
    {
        printf("nums are not equal");
    }
}