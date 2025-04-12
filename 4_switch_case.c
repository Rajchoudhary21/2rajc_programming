//wap to print prime minister name according to firts letter of country...
#include<stdio.h>
void main()
{
    char ch;
    printf("enter the first letter of country : ")  ;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'I': printf("Narendra Modi");break;
        case 'U': printf("keir starmer");break;
        case 'C': printf("mark carney");break;
        case 'J': printf("shingeru ishiba");break;
        case 'A': printf("antony albanese");break;
        case 'G': printf("olaf scholz");break;
        case 'N': printf("christopher luxon");break;
        case 'S': printf("David mabuza");break;
      
        default:printf("the country name starting with %c letter is not in my list..",ch);
    }
}