//function greater num...
#include<stdio.h>

void greater()

{
    int a,b;
    printf("enter the num 1 : ");
    scanf("%d",&a);
    printf("enter the num 2 : ");
    scanf("%d",&b);
   
   if(a>b)
   {
    printf("num 1 is greater");
   }
   else{
    printf("num 2 is grreater");
   }

}
void main()
{
    printf("check greater number program.........\n");
    greater();
}
