//with return type but no arguement
//Reverse     
#include<stdio.h>
int rev()
{
    int i,rev=0,rem;
    int n;
    printf("enter the num : ");
    scanf("%d",&n);
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
    printf("%d",rev());
}