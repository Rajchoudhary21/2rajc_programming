//wap to check given num is pliindrome num or not
#include<stdio.h>
void main()
{
    int num,rem,on,rev=0;
    printf("enter the num : ");
    scanf("%d",&num);
    on=num;
    while(num>0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;


    }
    if(on==rev)
    {
        printf("the num is plindrome num...");
    }
    else
    {
        printf("the num is not plindrome num...");
    }
}