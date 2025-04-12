//compound assignment........
#include<stdio.h>
void main()
{
	int a,b;
	printf("a=",a);
	scanf("%d",&a);
	printf("b=",b);
	scanf("%d",&b);
	/*a-=b;
	printf("-= %d\n",a);
	*/
	//a+=b;
	//a*=b;
	//a/=b;
	a%=b;
	printf("ans = %d\n",a);
}
