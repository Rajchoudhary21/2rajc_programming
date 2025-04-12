//8. wap to check given char is vowel or consonant....
#include<stdio.h>
void main()
{
    char ch;
    printf("enter the  alphabet character:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("the char is vowel ");

    }
    else
    {
        printf("the char is consonant");
    }
}