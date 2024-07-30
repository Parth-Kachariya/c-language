#include<stdio.h>

int main()
{
    int r,c,sum=0,n;
    printf("Enter row:");
    scanf("%d",&r);
    printf("Enter column:");
    scanf("%d",&c);
    
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a:[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        sum=sum+a[i][j];
        }
        printf("sum of all number%d:",sum);
    }
    n=r*c;
    printf("\naverage of number:%.2f",(float)sum/n);
}