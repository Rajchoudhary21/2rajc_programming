#include<stdio.h>
void main()
{
    int i,j,num=65;
    for(i=65;i<=71;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c ",num);
          num++;
        }
        printf("\n");
    }
}
/*
A
B C
D E F
G H I J
K L M N O
P Q R S T U
V W X Y Z [ \
*/