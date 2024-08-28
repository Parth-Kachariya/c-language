#include<stdio.h>

int main()
{
    int r,c,max=0;
    printf("Enter the row's array:");
    scanf("%d",&r);
    printf("Enter the column's array:");
    scanf("%d",&c);


    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             printf("enter a[%d][%d]:",i,j);
             scanf("%d",&a[i][j]);
        }
       
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             if(a[i][j]>max)
             {
                max=a[i][j];
             }
             printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("the largest number:%d",max);
}
    
    
    
    