#include<stdio.h>

int main()
{
  printf("==========[WELCOME]==========\n");
                     int n;
             printf("Enter product:");
             scanf("%d",&n);
    
             int prise[n],total_prise=0;
             int qun[n];
            float gst;
            for(int i=0;i<n;i++)
         {
   printf("==========[PRISE]==========\n");

             printf("enter prise %d :",i+1);
             scanf("%d",&prise[i] );
   printf("==========[QUNTETY]==========\n");

           printf("Enter qun %d :",i+1);
           scanf("%d" ,&qun[i]);
             total_prise+=prise[i]*qun[i];
    
     
           }
    printf("----------[YOUR AMOUNT]----------\n");
              printf("total prise: %d",total_prise);
               gst=total_prise*.18;
    printf("\n==========[YOUR PRISE]==========\n");
               printf("\n total prise with gst %.2f:",gst+total_prise);
     printf("\n==========[THANK YOU FOR VISIT]==========\n");
    
}     