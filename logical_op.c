#include<stdio.h>
void main()
{
    int a,b,c;
    a=42>4 && 44==32 && 1<2;
    b=!(1<2);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}