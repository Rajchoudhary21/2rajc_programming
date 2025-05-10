//Write a program that accepts some integers from the user and finds the highest value andthe input position...
#include<stdio.h>
void main()
{
    int i,Array[5]={55,89,54,36,74};
    printf("Array elements are : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",Array[i]);
    }
    int max=Array[0];
    int p=i;
    for(i=0;i<5;i++)
    {
        if(max<Array[i])
        {
            max=Array[i];
            p=i;
        }
    }
    printf("highest value in this Array : %d\n",max);
    printf("input position in Array : %d\n",p);
}
