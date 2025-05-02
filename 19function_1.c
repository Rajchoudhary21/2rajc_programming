//no return type but with arguement perfect num
#include<stdio.h>
void perfect(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n*2==sum)
    {
        printf("Perfect Num");

    }
    else
    {
        printf("Not prtfect");
    }
}
void main()
{
    int n;
    printf("enter the num : ");
scanf("%d",&n);
perfect(n);
}
