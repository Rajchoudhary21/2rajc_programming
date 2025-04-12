//11. wap to check given year is leap year or not......
#include<stdio.h>
void main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if((year%4==0 && year % 100 !=0)||(year % 400 == 0))
    {
        printf("the year is leap year");
    }
    else 
    {
        printf("the year is not leap year");
    }
}