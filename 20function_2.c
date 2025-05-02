//with return type  with arguement perfect num
#include<stdio.h>
int perfect(int n)
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
        return 1;

    }
    else
    {
        return 0;
    }
}
void main()
{
    int n;
    printf("enter the num : ");
scanf("%d",&n);
printf("%d",perfect(n));
}
