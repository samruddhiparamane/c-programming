#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("enter how many elements you want");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   // printf("given data is \n");
    sum=sum+a[i];
   } 
 printf("sum of array is %d",sum);
    return 0;
}