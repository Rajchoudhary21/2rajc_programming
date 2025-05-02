//no return type but with arguement prime number 
#include<stdio.h>
void prime(int n)
{
    int i,p=0;
for(i=1;i<=n;i++)
{
    
    if(n%i==0)
    {
        p++;
    }

}
if(p==2)
{
    printf("Prime Num");

}
else{
    printf("Not Prime Num");
}
}   
void main()
{
    int n;
    printf("enter the num : ");
    scanf("%d",&n);
    prime(n);
}