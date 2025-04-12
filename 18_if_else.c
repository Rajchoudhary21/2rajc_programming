//17. Write a program to calculate profit and loss on a transaction.....
#include<stdio.h>
void main()
{
  float sellingprice,costprice,profit_or_loss;
  printf("enter selling price :");
  scanf("%f",&sellingprice);  
  printf("enter cost price :");
  scanf("%f",&costprice); 
  if(sellingprice>costprice)
  {
    profit_or_loss = sellingprice-costprice;
    printf("profit = %.2f",profit_or_loss);
  }
  else if(costprice>sellingprice)
  {
    profit_or_loss = costprice-sellingprice;
    printf("loss = %.2f",profit_or_loss);
  }
  else
  {
    printf("no profit , no loss....");
  }
}