//Write a program to copy the elements of one array into another array
#include<stdio.h>
void main()
{
    int i,Array[5]={55,89,54,36,74};
    printf("Array elements are :\n");
    for(i=0;i<5;i++)
    {
        printf(" Element %d = %d\n",i,Array[i]);

    }
    printf("After copy array elements :\n");
    int copy[5];
    for(i=0;i<5;i++)
    {
        copy[i]=Array[i];
        printf(" copy %d = %d\n",i,copy[i]);

    }
    
}
