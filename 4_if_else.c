//wap for check whether a nmber is divisible by 5 and 11 or not......
#include<stdio.h>
void main()
{
    int num;
    printf("enter a num :");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("the num is divisible by 5.....");

    }
    else if(num%11==0)
    {
printf("the num is divisible by 11.....");

    }
    else
    {
        printf("the num is not divisible by 5 and 11");
    }
}