//Write a program that accepts some integers from the user and finds the highest value andthe input position...
//Pointer
#include<stdio.h>
void main()
{
    int i,Array[5]={55,89,54,36,74};
    int *ptr;
    ptr=&Array[0];
    printf("Array elements are : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
     ptr=&Array[0];
    int max=*ptr;
    int p=i;
   
    for(i=0;i<5;i++)
    {
        if(max<*ptr)
        {
            max=*ptr;
            p=i;
        }
        ptr++;
    }
    printf("\nhighest value in this Array : %d\n",max);
    printf("input position in Array : %d\n",p);
}