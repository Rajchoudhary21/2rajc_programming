//wap to accept user's marital status, gender and age to check if he/she is elgible for marriage or not.
#include<stdio.h>
void main()
{
    int ms,age,g;
    printf("Enter 1 for married...\n");
    printf("Enter 2 for single...\n");
    printf("your marital status : ");
    scanf("%d",&ms);
    if(ms==2)
    {
        printf("--------------------------------------------------\n");
        printf("Enter 1 for male...\n");
        printf("Enter 2 for female...\n");
        printf("gender : ");
        scanf("%d",&g);
        if(g==1)
        {
            printf("------------------------------------------------\n");

            printf("enter your age :");
            scanf("%d",&age);
            if(age>=21)
            {
                printf("------------------------------------------------\n");
                printf("you are eligible for marriage....");
            }
            else
            {
                printf("------------------------------------------------\n");
                printf("you are not eligible for marriage....");
            }
        }
        else if(g==2)
        {
            printf("------------------------------------------------\n");
            printf("enter your age :");
            scanf("%d",&age);
            if(age>=18)
            {
                printf("------------------------------------------------\n");
                printf("you are eligible for marriage....");
            }
            else
            {
                printf("------------------------------------------------\n");
                printf("you are not eligible for marriage....");
            }
        }
        else
        {
            printf("------------------------------------------------\n");
            printf("enter only 1 and 2");
        }

    }
    else if(ms==1)
    {
        printf("------------------------------------------------\n");
        printf("you are already married.....");
    }
    else
    {
        printf("------------------------------------------------\n");
        printf("enter only 1 and 2");
    }

}