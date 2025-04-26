//wap to check given num is perfect or not 
#include<stdio.h>
void main()
{
    int num,sum=0,i;
    printf("enter the num : ");
    scanf("%d",&num);
    i=1;

    while(i<=num)
    {
        
    if(num%i==0)
    {
        sum = sum+i;
    }
i++;
    }
    if(num*2==sum)
    {
        printf("the num is perfect");
    }
    else{
        printf("the num is not perfect");
    }
}