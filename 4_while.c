//wap to check given num is armstrong or not
#include<stdio.h>
void main()
{
    int num,rem,c=0,on,mul,sum=0,i,temp;
    printf("enter the num :");
    scanf("%d",&num);
    on = num;
temp = num;
    while(num>0)
    {
        rem = num%10;
        c++;
        num = num/10;
    }
while(on>0)
{
    rem = on%10;
    mul=1;
    for(i=1;i<=c;i++)
    {
        mul = mul*rem;

    }
    sum = sum+mul;
    on = on/10;

}
if(temp==sum)
{
    printf(" %d is an ARMSTRONG NUMBER......",sum);
}
else{
    printf("%d is NOT ARMSTRONG........",sum); 
}

   
}    