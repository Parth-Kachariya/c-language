#include<stdio.h>

int main ()
{
        int a;

        printf("Enter  percentage: ");
        scanf("%d",&a);

        if(a>=91 && a<=100)
        {
                printf("A1 grade");
        }
        else if(a>=81 && a<=90)
        {
                printf("A2 grade");
        }
        else if(a>=71 && a<=80)
        {
                printf("B1 grade");
        }
        else if(a>=61 && a<=70)
        {
                printf("B2 grade");
        }
        else if(a>=51 && a<=60)
        {
                printf("C1 grade");
        }
        else if(a>=41 && a<=50)
        {
                printf("C2 grade");
        }
        else if(a>=33 && a<=40)
        {
                printf("D grade");
        }
        else 
        {
            printf("you fail");
        
        }
}
    
    
    
    
    
    