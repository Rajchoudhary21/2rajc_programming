//no return type but with arguement 
//greater num...
#include<stdio.h>

void greater(int a,int b)

{
   
   if(a>b)
   {
    printf("num 1 is greater");
   }
   else{
    printf("num 2 is greater");
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
   
    greater(x,y);
}
