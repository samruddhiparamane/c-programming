#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("how many elements you want to enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("given data is: \n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}