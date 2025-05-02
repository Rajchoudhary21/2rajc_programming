//with return type with arguement prime number 
#include<stdio.h>
int prime(int n)
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
    return 1;
}
else{
   return 0;
}
}   
void main()
{
    int n;
    printf("enter the num : ");
    scanf("%d",&n);
    printf("%d",prime(n));
}