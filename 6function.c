//function area of circle...
#include<stdio.h>

void circle()

{
      float A,r,pi=3.141;
    printf("enter the Radius : ");
    scanf("%f",&r);
  A=pi*r*r;
   printf("Area = %.2f",A);

}
void main()
{
    printf("Area of circle program.........\n");
    circle();
}
