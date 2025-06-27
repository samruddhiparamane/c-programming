#include<stdio.h>
int main()
{
    float costprice,sellingprice,amount;
    printf("enter the cost price:");
    scanf("%f",&costprice);
    printf("enter the selling price:");
    scanf("%f",&sellingprice);

    if(sellingprice>costprice)
    amount=sellingprice-costprice;
    printf("profit of: %.2f\n",amount);

    else if(costprice>sellingprice)
    amount=costprice-sellingprice;
    printf("loss of: %.2f\n",amount);

    else
    printf("no profit,no loss.\n");
    return 0;


}