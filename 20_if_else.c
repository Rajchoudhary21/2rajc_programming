//19. Wap to check given number in range of 100-200 or not......
#include<stdio.h>
void main()
{
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    if(num>=100 && num<=200)
    {
        printf("the number is range on 100-200");

    }
    else
    {
        printf("the number is not in range 100-200.....");
    }
}