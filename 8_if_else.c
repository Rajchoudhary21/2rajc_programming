//4. wap to find gratest number among has given two num.....
#include<stdio.h>
void main()
{
    int n1,n2;
    printf("enter the num1:");
    scanf("%d",&n1);
    printf("enter the num2:");
    scanf("%d",&n2);
    if(n1>n2)
    {
        printf("n1 is greatest then n2");

    }
    else if(n2>n1)
    {
        printf("n2 is greatest then n1 ");
    }
    else{
        printf("both numbers are equal");
    }
}