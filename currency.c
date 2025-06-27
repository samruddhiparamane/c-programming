#include<stdio.h>
int main()
{
    int ten,five,one,amount;
    printf("enter the amount to be withdraw");
    scanf("%d",&amount);

    ten=amount/10;
    amount=amount%10;

    five=amount/5;
    amount=amount%5;

    one=amount;
     printf("the currency of notes of 10 is :%d",ten);
     printf("the currency of notes of 5 is :%d ",five);
     printf("the currency of notes of 1 is :%d",one);

     return 0;

}