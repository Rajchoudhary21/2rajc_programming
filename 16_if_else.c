//12. Write a program to check whether a character is an alphabet, digit or special character.......
#include<stdio.h>
void main()
{
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if((ch>='A'&& ch<='Z') || ( ch >='a'&& ch<='z'))
    {
        printf("%c is an alphabet.\n",ch);
    }
    else if( ch>='0' && ch<='9')
    {
        printf("%c is an digit.\n",ch); 
    }
    else
    {
        printf("%c is a special character..",ch);
    }
    
}