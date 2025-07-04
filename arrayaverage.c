#include<stdio.h>
int main()
{
    int a[100], n,i,sum=0;
    float avg;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the given data is:");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("average of array elements is %.2f",avg);
    return 0;
}