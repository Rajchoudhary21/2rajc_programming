//3. wap to accept a num from user and print if it is divisible by 5....
#include<stdio.h>
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("the number div. by 5");

    }
    else{
        printf("the number not div. by 5");
    }
}