//check whether the triangle is equilateral, scalene or isosceles...
#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("enter side1 : ");
    scanf("%d",&s1);
    printf("enter side2 : ");
    scanf("%d",&s2);
    printf("enter side3 : ");
    scanf("%d",&s3);
    if(s1<s3+s2 && s2<s1+s3 && s3<s2+s1)
    {
        if(s1==s2 && s2==s3)
        {
            printf("the triangle is equilateral....");
        }
        else if(s1!=s2 && s2!=s3)
        {
            printf("the triangle is scalene....");
        }
        else
        {
            printf("the triangle is isosceles....");
        }
    }
    else
    {
        printf(" enter sides are not make triangle....");
    }
}