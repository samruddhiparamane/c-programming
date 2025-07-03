#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    FILE *fp;
    char data[100];
    int a[100],n,i,key,j;
    fp=fopen("number.txt","r");
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d",&a[i]);
        printf("%d   ",a[i]);
    }
    printf("enter deleted element");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            for(j=i;j<n-1;j++)
            a[j]=a[j+1];
            n--;
            break;
            

        }
    }
    printf("array after deletion:");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
    
    
