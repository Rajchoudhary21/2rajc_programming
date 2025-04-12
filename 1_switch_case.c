//wap to make calculate area calculator........
#include<stdio.h>
void main()
{
int s,b,h,r,l,w,area,ans,num;
    printf("welcome to calculate area of calculator......\n");
    printf("press 1 for calculate area of triangle...\n");
    printf("press 1 for calculate area of circle...\n");
    printf("press 1 for calculate area of reactangle...\n");
    printf("press 1 for calculate area of square...\n");
    printf("enter the number : ");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("you select calculate area of triangle\n");
        printf("enter the base : ");
        scanf("%d",&b);
        printf("enter the height : ");
        scanf("%d",&h);
        area = 1.5*b*h;
        printf("the area of triangle = %d",area);
        break;
        case 2: printf("you select calculate area of circle\n");
        printf("enter the radius : ");
        scanf("%d",&r);
        area = 3.14*r*r;
        printf("the area of circle = %d",area);
        break;
        case 3: printf("you select calculate area of reactangle\n");
        printf("enter the length : ");
        scanf("%d",&l);
        printf("enter the weidth : ");
        scanf("%d",&w);
        area = l*w;
        printf("the area of reactangle = %d",area);
        break;
        case 4: printf("you select calculate area of square\n");
        printf("enter the side : ");
        scanf("%d",&s);
        area = s*s;
        printf("the area of square = %d",area);
        break;
        default: printf("please enter 1 to 4 for");


    }
} 