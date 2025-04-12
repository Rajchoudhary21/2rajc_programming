#include<stdio.h>
void main()
{
    int age;
    printf("enter the age :",age);
    scanf("%d",&age);
    age>=20 && age<=40 ? printf("eligible"): printf("not eligible");
}