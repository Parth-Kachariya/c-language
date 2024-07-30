#include<stdio.h>

int main()
{
    int n;
    
   

    printf("Enter size :");
    scanf("%d",&n);
    int a[n];
    printf("Enter array a elelment:\n");
    
    for(int i=0;i<n;i++)
    {
        printf("enetr a[%d]:",i);
        scanf("%d",&a[i]);    
    }
    for(int i=0;i<n;i++)
    {
         printf("\nsecure: %d",a[i]*a[i]);    
    }
    

}