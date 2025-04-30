//function factorial...
#include<stdio.h>

void factors()

{
    int num,i;
    printf("enter the num :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
       if(num%i==0)
       {
        printf("%d ",i);
       }
    }

}
void main()
{
    printf("print factors program.........\n");
    factors();
}
