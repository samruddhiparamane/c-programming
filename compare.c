#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    if(num1==num2)
    printf("the two numbers are equal:%d\n",num1,num2);
    else if (num1>num2)
    printf("the number first is greater than number second:%d\n",num1,num2);
    else
    printf("the number first is less than number second:%d\n",num1,num2);

    return 0;
    

    
}