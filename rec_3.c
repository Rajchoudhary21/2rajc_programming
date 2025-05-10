//recursion
//wap to print table of any number
#include<stdio.h>
void table(n)
{
    static int i=1;
    printf("%d x %d = %d\n",n,i,n*i);
    i++;
    if(i<=10) table(n); 
    
}
void main()
{
    int n;
    printf("enter the num :");
    scanf("%d",&n);
    table(n);
}