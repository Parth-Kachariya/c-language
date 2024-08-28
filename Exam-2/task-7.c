#include<stdio.h>

int main()
{
    int n,sum=0;
    
    printf("enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("enter array a elements\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int b[n];
    printf("enter array b elements\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter b[%d]:",i);
        scanf("%d",&b[i]);
    }
    printf("array c:");
    for(int i=0;i<n;i++)
    {
        sum=a[i]+b[i];
        
        printf("%d ",sum);   
    }
    
}