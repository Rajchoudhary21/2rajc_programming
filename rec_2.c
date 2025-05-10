//recursion
//wap to print 100 natural
#include<stdio.h>
void fun(int n)
{

    if(n>1)
    {
        fun(n-1);
    }
    printf("%d ",n);
}
void main()
{
   fun(100);
}