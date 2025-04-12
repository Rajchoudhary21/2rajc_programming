#include <stdio.h>

void main() {
    int age, num;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("\n");
        printf("     || Welcome to our Cafe ||     \n");
        printf("\n");
        printf("Press 1 for Chinese food...\n");
        printf("Press 2 for Drinks...\n");
        printf("Press 3 for Desserts...\n");
        printf("\n");
        printf("Press the number for your order: ");
        scanf("%d", &num);
        printf("\n");

        switch (num) {
            case 1:
                printf("You selected Chinese food...\n");
                printf("                    Items             Price\n");
                printf("Press 1 for Dry Manchurian            60/-\n");
                printf("Press 2 for Gravy Manchurian         80/-\n");
                printf("Press 3 for Noodles                 50/-\n");
                printf("Press 4 for Fried Rice              90/-\n");
                printf("Press 5 for Spring Roll             50/-\n");
                printf("Press 6 for Momos                   60/-\n");
                printf("Press 7 for Sandwich                60/-\n");
                printf("\n");
                printf("Press the number for your order: ");
                scanf("%d", &num);
                printf("\n");

                switch (num) {
                    case 1: printf("Your Dry Manchurian Ordered, please pay 60/- rupees......\n"); break;
                    case 2: printf("Your Gravy Manchurian Ordered, please pay 80/- rupees......\n"); break;
                    case 3: printf("Your Noodles Ordered, please pay 50/- rupees......\n"); break;
                    case 4: printf("Your Fried Rice Ordered, please pay 90/- rupees......\n"); break;
                    case 5: printf("Your Spring Roll Ordered, please pay 50/- rupees......\n"); break;
                    case 6: printf("Your Momos Ordered, please pay 60/- rupees......\n"); break;
                    case 7: printf("Your Sandwich Ordered, please pay 60/- rupees......\n"); break;
                    default: printf("Please press a number between 1 and 7.\n"); break;
                }
                break;

            case 2:
                printf("You selected Drinks...\n");
                printf("                    Items             Price\n");
                printf("Press 1 for Cold Coffee            120/-\n");
                printf("Press 2 for Hot Coffee             50/-\n");
                printf("Press 3 for Tea                    20/-\n");
                printf("Press 4 for Lassi                  60/-\n");
                printf("Press 5 for Coconut Water          50/-\n");
                printf("Press 6 for Chocolate Shake       100/-\n");
                printf("\n");
                printf("Press the number for your order: ");
                scanf("%d", &num);
                printf("\n");

                switch (num) {
                    case 1: printf("Your Cold Coffee Ordered, please pay 120/- rupees......\n"); break;
                    case 2: printf("Your Hot Coffee Ordered, please pay 50/- rupees......\n"); break;
                    case 3: printf("Your Tea Ordered, please pay 20/- rupees......\n"); break;
                    case 4: printf("Your Lassi Ordered, please pay 60/- rupees......\n"); break;
                    case 5: printf("Your Coconut Water Ordered, please pay 50/- rupees......\n"); break;
                    case 6: printf("Your Chocolate Shake Ordered, please pay 100/- rupees......\n"); break;
                    default: printf("Please press a number between 1 and 6.\n"); break;
                }
                break;

            case 3:
                printf("You selected Desserts...\n");
                printf("                    Items             Price\n");
                printf("Press 1 for Rasmalai               80/-\n");
                printf("Press 2 for Gulab Jamun            50/-\n");
                printf("Press 3 for Gajar Halwa            60/-\n");
                printf("Press 4 for Kaju Katli             60/-\n");
                printf("Press 5 for Jalebi                 50/-\n");
                printf("Press 6 for Barfi                  50/-\n");
                printf("\n");
                printf("Press the number for your order: ");
                scanf("%d", &num);
                printf("\n");

                switch (num) {
                    case 1: printf("Your Rasmalai Ordered, please pay 80/- rupees......\n"); break;
                    case 2: printf("Your Gulab Jamun Ordered, please pay 50/- rupees......\n"); break;
                    case 3: printf("Your Gajar Halwa Ordered, please pay 60/- rupees......\n"); break;
                    case 4: printf("Your Kaju Katli Ordered, please pay 60/- rupees......\n"); break;
                    case 5: printf("Your Jalebi Ordered, please pay 50/- rupees......\n"); break;
                    case 6: printf("Your Barfi Ordered, please pay 50/- rupees......\n"); break;
                    default: printf("Please press a number between 1 and 6.\n"); break;
                }
                break;

            default:
                printf("Invalid input! Please select a valid menu option (1, 2, or 3).\n");
        }
    } else {
        printf("You are not eligible for our cafe, please come after %d years.\n", 18 - age);
    }

    printf("        --- THANK YOU ---        \n");
    printf("                                 \n");
    printf("       Visit again our Cafe      \n");
}
