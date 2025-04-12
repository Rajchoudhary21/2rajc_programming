//wap to print country name according to firts letter of country...
#include<stdio.h>
void main()
{
    char ch;
    printf("enter the first letter of country : ")  ;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'I': printf("India");break;
        case 'P': printf("pakistan");break;
        case 'A': printf("America");break;
        case 'J': printf("Japan");break;
        case 'G': printf("Germany");break;
        case 'S': printf("Spain");break;
        case 'F': printf("France");break;
        case 'U': printf("Unted kingdom");break;
        case 'C': printf("canada");break;
        case 'M': printf("mexico");break;
        case 'R': printf("Russia");break;
        default:printf("the name starting with %c letter is not in country of my list..",ch);
    }
}