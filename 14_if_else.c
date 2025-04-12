//10. wap to check given nmber is dv by 3 , 4 and 8 or not......
#include<stdio.h>
void main()
{
    int n;
    printf("enter the num:");
    scanf("%d",&n);
    if(n%3==0 && n%4==0 && n%8==0)
    {
        printf("the num is div by 3,4 and 8");

    }
    else
    {
        printf("the num is not div by 3,4 and 8");
    }
}