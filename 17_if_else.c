 //13.Write a program to check whether the triangle is valid or not if angles are given.....
#include<stdio.h>
void main()
{
 int a,b,c,D;
 printf("enter the first angel:");
 scanf("%d",&a);
 printf("enter the second angel:");
 scanf("%d",&b);
 printf("enter the third angel:");
 scanf("%d",&c);
 printf("given angles...\n");
 printf("angle 1 : %d\n",a);
 printf("angle 2 : %d\n",b);
 printf("angle 3 : %d\n",c);
D = a+b+c;
 printf("sum of angles : %d\n",D);
 if(a+b+c == 180 &&  a>0 && b>0 && c>0)
 {
    printf("triangle is valid....");
 }
 else{
    printf("triangle is not valid....");
 }

}