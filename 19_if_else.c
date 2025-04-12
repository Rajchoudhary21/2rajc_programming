//18.Wap to find greatest number among has given th ree numbers without using logical AND operator
#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("enter the num1 : ");
    scanf("%d",&n1);
    printf("enter the num2 : ");
    scanf("%d",&n2);
    printf("enter the num3 : ");
    scanf("%d",&n3);
    if(n1>n2)
    {
        printf("greatest num : %d",n1);
    }
    else if(n2>n3)
    {
        printf("greatest num : %d",n2);
    }
    else
    {
        printf("greatest num : %d",n3);
    }
}