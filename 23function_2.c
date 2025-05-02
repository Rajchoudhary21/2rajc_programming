//with return type with arguement 
//greater num...
#include<stdio.h>

int greater(int a,int b)

{
   
   if(a>b)
   {
    return 1;
   }
   else{
    return 2;
   }

}
void main()
{
    int x,y;
    printf("check greater number program.........\n");
    printf("enter the num 1 : ");
    scanf("%d",&x);
    printf("enter the num 2 : ");
    scanf("%d",&y);
    printf("%d",greater(x,y));

}