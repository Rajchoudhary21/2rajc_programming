//recursion
//Wap to find sum of all number between 1-25 and check sum is even or odd.
#include<stdio.h>
int fun(int n)
{
    static int sum = 0; 
    if (n > 0) {
        sum += n;
        fun(n - 1);
    }
return sum;
}
void main()
{
    int t = fun(25);
    printf("sum = %d \n",t);
    if(t%2==0)
    {
        printf("the sum is even");
    }
    else
    {
        printf("sum is odd");
    }
       
    
}