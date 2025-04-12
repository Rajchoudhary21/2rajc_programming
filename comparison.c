//comparison/relational operations...........
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("a=",a);
	scanf("%d",&a);
	printf("b=",b);
	scanf("%d",&b);
	c=a<b;
	printf("less than = %d\n",c);
	c=a>b;
	printf("greator than = %d\n",c);
	c=a<=b;
	printf("less than equal to = %d\n",c);
	c=a>=b;
	printf("greator than equal to = %d\n",c);
	c=a==b;
	printf("double equal to = %d\n",c);
	c=a!=b;
	printf("not equal to = %d\n",c);

}
