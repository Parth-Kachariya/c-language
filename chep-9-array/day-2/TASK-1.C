#include<stdio.h>

int main()
{
    int a,b;
   

    printf("Enter size a:");
    scanf("%d",&a);
    int A[a];
    printf("Enter array a elelment:\n");
    
    for(int i=0;i<a;i++)
    {
        printf("enetr a[%d]:",i);
        scanf("%d",&A[i]);
       
    }
    printf("Enter size b:");
    scanf("%d",&b);
    int B[b];
    printf("Enter array b elelment:\n");
    for(int i=0;i<b;i++)
    {
        printf("enetr b[%d]:",i);
        scanf("%d",&B[i]);
         
    } 
    int C[a+b];
    printf("array c:");
    for(int i=0;i<a;i++)
    {
        C[i]=A[i];
    } 
    for(int i=0;i<b;i++)
    {
        C[a+i]=B[i];
    } 
    for(int i=0;i<a+b;i++)
    {
         printf("%d ",C[i]);    
    }
    
}
