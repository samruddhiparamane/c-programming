#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[100],n,i,key,cnt=0;
    fp=fopen("number.txt","r");
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d",&a[i]);
        printf("%d   ",a[i]);
    }
    printf("\nenter elements for occurence");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        cnt++;
    }
      if(cnt==0)
      printf("not found");
      else
      printf("count is: %d",cnt);
      return 0;
}
