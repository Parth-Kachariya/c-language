#include<stdio.h>

int main()
{
    int r,c,sum=0;
    printf("Enter row:");
    scanf("%d",&r);
    printf("Enter column:");
    scanf("%d",&c);

    printf("\narray A ==\n");

    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a:[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\narray B ==\n");

    int b[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter b:[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\narray C ==\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum=a[i][j]+b[i][j];
            printf(" %d ",sum);
            
        }
        printf("\n");
   }
}