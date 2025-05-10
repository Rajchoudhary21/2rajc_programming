//Wap to check how many numbers is even & odd in a list..
#include<stdio.h>
void main()
{
    int i,Array[5]={85,58,445,55,485};
    printf("Array elements are :\n");
    for(i=0;i<5;i++)
    {
        printf(" Element %d = %d\n",i,Array[i]);

    }
    printf("even and Odd Array elements : \n");
    
    int e=0,o=0;
    for(i=0;i<5;i++)
    {
        if(Array[i]%2==0)
        {
            e++;
            printf("even Array %d = %d\n",i,Array[i]);

        }
     if(Array[i]%2==1)
        {
            o++;
            printf("odd Array %d = %d\n",i,Array[i]);

        }
    }
    printf("even Array elements are %d\n",e);
    printf("odd Array elements are %d\n",o);

    
}
