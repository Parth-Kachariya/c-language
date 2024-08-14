#include "function.c"
int main()
{
    int n=getInt();

    int a[n];

    getArrayinput(a,n);
    int ans=getArraysum(a,n);
    
    // int c;
    int max,min;
    tmp:
        printf("\n1) print array:\n");
        printf("2) sum of array:\n");
        printf("3) avg of array:\n");
        printf("4) assnding of array:\n");
        printf("5) disnding of array:\n");
        printf("6) maximum of array:\n");
        printf("7) minimum of array:\n");
        printf("0) Exiting of array:");
        printf("\n");
    int c=getchoice();
    
    do
    {
        
        
        
        switch(c)
        {
        case 1 :
            printf("\n");
            printarray(a,n);
            goto tmp;
        case 2:
            printf("\nsum of array:%d\n",ans);
            goto tmp;
        case 3:
            printf("\navg of array:%.2f\n",(float)ans/n);
            goto tmp;
        case 4:
            printf("\n");
            getassnding(a,n);
            goto tmp;
        case 5:
            printf("\n");
            getdisnding(a,n);
            goto tmp;
        case 6:
            printf("\n");
            getarraymax(a,n);
            goto tmp;
        case 7:
            printf("\n");
            getarraymin(a,n);
           goto tmp;
        case 0:
            printf("\n");
            printf("===== YOU ARE EXITE =====");
            break;
        default:
            printf("\n");
            printf("===== invelid number plize try again =====");
            goto tmp;
        }
    }while(c!=0);
}