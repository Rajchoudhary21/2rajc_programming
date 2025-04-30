//function negative or positive...
#include<stdio.h>
void n_p()
{
    int num;
    printf("enter the num : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("positive number");
    }
    else if(num==0) {
        printf("zero number");
    }
    else{
        printf("Nagative number");
    }
}
void main()
 {
        printf("check num is positive or nagative programmm...\n");
        n_p(); 
}

