//wap for cafe menu......
#include<stdio.h>
void main()
{
    int age,num;
    printf("enter your age :");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("                                    \n");
        printf("     || Welcome to our Cafe ||     \n");
        printf("                                    \n");
        printf("press 1 for  Chinese food...\n");
        printf("press 2 for  Drinks...\n");
        printf("press 3 for  Deserts...\n");
        printf("                                    \n");
        printf("Press the number for your order : ");
        scanf("%d",&num);
        printf("                                    \n");
        switch(num)
        {
            case 1: printf("your select Chinese food...");
            printf("                                    \n");
            printf("                    Items             Price\n");
            printf("Press 1 for      Dry manchurian        60/-\n");
            printf("Press 2 for    greavy manchurian       80/-\n");
            printf("Press 3 for         Noodles            50/-\n");
            printf("Press 4 for        Fried Rice          90/-\n");
            printf("Press 5 for        spring roll         50/-\n");
            printf("Press 6 for           Momos            60/-\n");
            printf("Press 7 for         Sandwitch          60/-\n");
            printf("                                    \n");
            printf("Press the number for your order : ");
            scanf("%d",&num);
            switch(num)
            {  
                case 1: printf("Your Dry manchurian Ordered, please pay 60/- rupees......\n");break;
                case 2: printf("Your greavy manchurian Ordered, please pay 80/- rupees......\n");break;
                case 4: printf("Your Fried Rice Ordered, please pay 90/- rupees......\n");break;
                case 3: printf("Your  Noodels Ordered, please pay 50/- rupees......\n");break;
                case 5: printf("Your Spring roll Ordered, please pay 50/- rupees......\n");break;
                case 6: printf("Your Momos Ordered, please pay 60/- rupees......\n");break;
                case 7: printf("Your Sandwitch Ordered, please pay 60/- rupees......\n");break;
                default:printf("please press 1 to 7 ");break;
            } break;
            case 2: printf("your select Drinks...");
            printf("                                    \n");
            printf("                    Items             Price\n");
            printf("Press 1 for       Cold Coffee          120/-\n");
            printf("Press 2 for        Hot coffee           50/-\n");
            printf("Press 3 for          Tea                20/-\n");
            printf("Press 4 for         Lassi               60/-\n");
            printf("Press 5 for      coconut water          50/-\n");
            printf("Press 6 for     chocolate shake         100/-\n");
            printf("                                    \n");
            printf("Press the number for your order : ");
            scanf("%d",&num);
            switch(num)
            {
                case 1: printf("Your Cold coffee Ordered, please pay 120/- rupees......\n");break;
                case 2: printf("Your Hot coffee Ordered, please pay 50/- rupees......\n");break;
                case 4: printf("Your Tea Ordered, please pay 20/- rupees......\n");break;
                case 3: printf("Your  Lassi Ordered, please pay 60/- rupees......\n");break;
                case 5: printf("Your Coconut water Ordered, please pay 50/- rupees......\n");break;
                case 6: printf("Your Chocolate shake Ordered, please pay 100/- rupees......\n");break;
                default: printf("please press 1 to 6");break;
            } break;
         

            case 3: printf("your select Desert...");
            printf("                                    \n");
            printf("                    Items             Price\n");
            printf("Press 1 for        Rasmalai             80/-\n");
            printf("Press 2 for      Gulab jamun            50/-\n");
            printf("Press 3 for      Gajar halwa                60/-\n");
            printf("Press 4 for       kaju katli               60/-\n");
            printf("Press 5 for         jalebi          50/-\n");
            printf("Press 6 for         Barfi         50/-\n");
            printf("                                    \n");
            printf("Press the number for your order : ");
            scanf("%d",&num);
            switch(num)
            {
                case 1: printf("Your Rasmalai Ordered, please pay 80/- rupees......\n");break;
                case 2: printf("Your Gulab jamun Ordered, please pay 50/- rupees......\n");break;
                case 4: printf("Your Gajar halwa Ordered, please pay 60/- rupees......\n");break;
                case 3: printf("Your  Kaju katli Ordered, please pay 60/- rupees......\n");break;
                case 5: printf("Your Jalebi Ordered, please pay 50/- rupees......\n");break;
                case 6: printf("Your Barfi Ordered, please pay 50/- rupees......\n");break;
                default: printf("please press 1 to 6");break;
            } break;
            default:printf("please select 1 to 3");
        }
    }
    else
    {
        printf("You are not eligible for our cafe, please come after %d year",18-age);
    }
    printf("        --- THANK YOU ---        \n");
    printf("                                 \n");
    printf("       Visit again our Cafe      \n");


    
}