#include<stdio.h>

int main()
{
    int r,c,sum=0;
    printf("Enter row:");
    scanf("%d",&r);
    printf("Enter column:");
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
            if(i==0||j==0||i==r-1||j==c-1)
            {
                printf("%d",a[i][j]);
                sum=sum+a[i][j];
            }
            else
            {
              printf ("  ");
            }
         }
         printf("\n");
              
     }
     printf("sum of diagonal no.%d:",sum);
     
          
}
           