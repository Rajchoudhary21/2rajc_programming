//20. WAP to check wether the last digit of number (enter by user) is divisible by 3 or not.
#include<stdio.h>
void main()
{
    int num,last_digit;
    printf("enter the number :");
    scanf("%d",&num);
    last_digit = num % 10;
    printf("last digt : %d\n",last_digit);
    if(last_digit % 3 ==0)
    
    {
        printf("the last digit of num is div by 3 ");

    }
    else

{
    printf("the last digt of num is not div by 3...");
}
}