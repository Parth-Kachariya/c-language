#include "function.c"

int main()
{
    
    int result;
    int a = getIntA();
    int b = getIntB();
    tmp:
    printf("\npress 1 sum+\n");
    printf("press 2 sub -\n");
    printf("press 3  multi *\n");
    printf("press 4  div /\n");
    printf("pree 5  mod %\n");
    printf("pres 0 exite ->");
        
    printf("\n");
    int c=getchoice();
        
    
        switch(c)
        {
        case 1 :
            printf("\n");
            result=sum(a,b);
            printf("%d",result);
            goto tmp;
        case 2:
            result=sub(a,b);
            printf("%d",result);;
            goto tmp;
        case 3:
            result=multi(a,b);
            printf("%d",result);
            goto tmp;
        case 4:
            printf("\n");
            result=div(a,b);
            printf("%d",result);
            goto tmp;
        case 5:
            printf("\n");
            result=mod(a,b);
            printf("%d",result);
            goto tmp;
        
        case 0:
            printf("\n");
            printf("=====YOU ARE EXITE=====");
            break;
        
        default:
            printf("\n");
            printf("======invelid number plize try again======\n");
            goto tmp;
        }
    
}
