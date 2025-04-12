#include<stdio.h>
void main()
{
	float p,r,t,msi,mta,yta,ysi;
	printf("its program for find simple interest................\n");
	printf("principle = ",p);
	scanf("%f",&p);
	printf("rate = ",r);
	scanf("%f",&r);
	printf("time = ",t);
	scanf("%f",&t);
	ysi=(p*r*t)/100;
	msi=ysi*12;
	mta=msi+p;
	yta=ysi+p;
	printf("monthly simple interest = %.2f\n",msi);
	printf("total amount = %.2f\n",mta);
	printf("yearly simple interest = %.2f\n",ysi);
	printf("yeary total amount = %.2f\n",yta);
	
	
}
