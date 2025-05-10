//recursion
//wap to print 1 to 10 numbers...
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
    fun(10);

}