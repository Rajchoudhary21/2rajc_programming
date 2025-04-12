//wap to print your freind name according to firts letter of name...
#include<stdio.h>
void main()
{
    char ch;
    printf("enter the first letter of name : ")  ;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A': printf("Aditya");break;
        case 'B': printf("Bharat");break;
        case 'C': printf("Chintu");break;
        case 'D': printf("Dheeraj");break;
        case 'H': printf("Hemant");break;
        case 'K': printf("Kamal");break;
        case 'L': printf("Lakhan");break;
        case 'M': printf("Mitesh");break;
        case 'N': printf("Navin");break;
        case 'P': printf("Pritam");break;
        case 'R': printf("Raj");break;
        default:printf("the name starting with %c letter is not in your friend list..",ch);
    }
}