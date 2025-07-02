#include<stdio.h>
int main()
{
    int a[100],n,i,key,cnt=0;
    printf("how many elements you want to enter");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter elements for occurence:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
         cnt++;
         }
         if(cnt==0)
         printf("not found");
         else
         printf("count is %d",cnt);
         return 0;
}