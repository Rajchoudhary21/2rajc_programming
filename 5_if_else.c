//1. wap to read the age of a candidate and determine whether he is eligible to casting own vote.....
#include<stdio.h>
void main()
{
    int age;
    printf("enter your age :");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("your eligible ");

    }
    else
    {
        printf("your not eligible");
        
    }
}
