//with return type  but no arguement perfect num
#include<stdio.h>
int perfect()
{
    int i,sum=0;
    int n;
    printf("enter the num : ");
    scanf("%d",&n);
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
   
printf("%d",perfect());
}
