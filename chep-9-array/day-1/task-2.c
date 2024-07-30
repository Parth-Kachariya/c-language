#include<stdio.h>

int main()
{
     int n,i,sum=0;
     printf("Enter n:");
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++)
     {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
         sum+=a[i];
     }
     printf("avarage of array :%.2f",(float)sum/n);
     
}