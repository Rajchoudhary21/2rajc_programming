//with return type but no arguement prime number 
#include<stdio.h>
int prime()
{
    int n,i,p=0;
    printf("enter the num : ");
    scanf("%d",&n);
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
    
    printf("%d",prime());
}