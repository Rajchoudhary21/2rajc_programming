#include<stdio.h>
void main()
{
    do
    {
      float fv,sv,tv,inst,cv,cm,f1,f2;
    printf("enter contract value : ");
    scanf("%f",&cv);
    printf("enter issue date : ");
    scanf("%f",&f1);
    printf("enter renewal date : ");
    scanf("%f",&f2);

   
  f1=f2-f1;
  cm=f1*12;
    fv = cv/cm;
    sv=fv*10.33;
    tv=sv/100;
    inst=tv+fv;
    printf("Installment : %.4f\n",inst);
    printf("----------------------------------\n");

    }  while(12>8);
}