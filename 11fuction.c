//function prime...
#include<stdio.h>
void prime()

{
    int num,i,p=0;
    printf("enter the num :");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        if(num%i==0)
        {
        p++;
        }
        i++;
    }
    
    if( p == 2 )
    {
        printf("Prime num");

    }
    else{
        printf("not prime number");
    }

}
void main()
{
    printf("Check number is prime or not program.........\n");
    prime();
}