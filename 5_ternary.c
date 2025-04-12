#include<stdio.h>
void main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    num>0 ? printf("positive") : num<0 ? printf("nagative") : printf("zero");
}