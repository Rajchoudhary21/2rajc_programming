//with return type but no arguement 
//greater num...
#include<stdio.h>

int greater()

{
    int a,b;
    printf("check greater number program.........\n");
    printf("enter the num 1 : ");
    scanf("%d",&a);
    printf("enter the num 2 : ");
    scanf("%d",&b);
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
   
    printf("%d",greater());

}