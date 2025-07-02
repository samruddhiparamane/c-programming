#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[100],n,i,key,pos;
    fp=fopen("number.txt","r");
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d",&a[i]);
        printf("%d   ",a[i]);
    }
    printf("enter inserted element");
    scanf("%d",&key);
    printf("enter the position where you want to insert the element");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
    a[i]=a[i-1];
    a[pos-1]=key;
    n++;
    printf("array after insertion:");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
