//function table...
#include<stdio.h>

void table()

{
    int num,i;
    printf("enter the num :");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf(" %d X %d = %d \n",num,i,num*i);
    }
}
void main()
{
    printf("print table any number program.........\n");
    table();
}
