#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    FILE *fp;
    char data[100];
    int a[100],n,i,k,j;
    fp=fopen("number.txt","r");
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d",&a[i]);
        printf("%d   ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]=a[j])
            {
                for(k=j;k<n-1;k++)
                a[k]=a[k+1];
                n--;
                j--;
            }
        }
    }
    printf("array after deletion:");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
    return 0;
}
    