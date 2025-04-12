#include<stdio.h>
void main()
{
    int num;
    printf("enter the num 1 for hindi 2 for english :");
    scanf("%d",&num);
    if(num==1)
    {
        printf("hindi");
    
    }
    if(num==2)
    {
        printf("english");

    }
    if(num>2){
    printf("please enter 1 or 2 only");
}
}