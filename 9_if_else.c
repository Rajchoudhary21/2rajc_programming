//5. WAP to accept a number and check if it is >10,<10 or =10 n language......
#include<stdio.h>
void main()
{
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    if(n>10)
    {
        printf("n greater than 10");
    }
    else if(n<10)
    {
        printf("n less then 10");

    }
    else{
        printf("10 equal to 10");
    }
}