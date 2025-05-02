//with return type but with arguement
//Reverse     
#include<stdio.h>
int rev(int n)
{
    int i,rev=0,rem;
    for(i=1;i<=n;i++)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
   return rev;

}
void main()
{
    int n;
    printf("enter the num : ");
    scanf("%d",&n);
    printf("%d",rev(n));
}