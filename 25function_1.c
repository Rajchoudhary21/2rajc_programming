//no return type but with arguement
//Reverse     
#include<stdio.h>
void rev(int n)
{
    int i,rev=0,rem;
    for(i=1;i<=n;i++)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    printf("reverse num = %d",rev);

}
void main()
{
    int n;
    printf("enter the num : ");
    scanf("%d",&n);
    rev(n);
}