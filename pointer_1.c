//pointer 
#include<stdio.h>
void main()
{
    int array[5];
    int *ptr,i;
    ptr=&array[0];
    printf("Enter array element : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
     ptr=&array[0];
    printf("Display array elements are : \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    int sum=0;
    ptr=&array[0];
    printf("\nsum of array elements are : \n");
    for(i=0;i<5;i++)
    {
       sum = sum + *ptr;
       ptr++;
    }
    printf("sum of array elements = %d",sum);
}
