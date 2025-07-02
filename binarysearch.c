#include<stdio.h>
int main()
{
    
int a[100], n, i,flag,low,mid,high,key,j;
    printf("how many elements you want to enter");
    scanf("%d", &n);
    printf("enter elements");
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("enter element for search");
    scanf("%d",&key);
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
     flag=0;
    low=0;
    high=n-1;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        else if(a[mid]>key)
        high=mid-1;
        else
        low=mid+1;
    }
    if(flag==1)
    printf("element found");
    else
    printf("not found");
    return 0;
}
}

