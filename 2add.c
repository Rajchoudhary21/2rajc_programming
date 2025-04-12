#include<stdio.h>
void main()
{
	char a,b,c;
	a = b;
	b = a;
	c = a+b;
	printf("value of a = %c\n",'a');
	printf("value of b = %c\n",'b');
	printf("a+b = %c\n",'c');
}
