#include<stdio.h>

int main()
{
            int a,b,c;
            printf("enter a: ");
            scanf("%d",&a);
            printf("enter b: ");
            scanf("%d",&b);
            
            printf("1)sum +\n");
            printf("2)sub -\n");
            printf("3)multi *\n");
            printf("4)div/\n");
            printf("5) mod %\n");
            
            
           printf("enter your choice:");
           scanf("%d",&c);
           
           
           switch(c)
           {
                   case 1:
                   printf("sum of %d + %d= %d",a,b,a+b);
                   break;
                   
                   case 2:
                   printf("sub of %d - %d = %d",a,b,a-b);
                   break;
                   
                  case 3:
                   printf("multi of%d * %d = %d",a,b,a*b);
                   break;
                   
                  case 4:
                   printf("div of%d / %d = %d",a,b,a/b);
                   break;
                   
                  case 5:
                   printf("mod of %d , %d = %d",a,b,a%b);
                   printf("");
                   break;
           
           default:
              printf("invalid number");
           }
}
    
    
    
    
    
    