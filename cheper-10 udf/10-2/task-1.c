#include"application.c"
int main()
{
    int n= getINT();
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int ans=getarraysum(a,n);
    printf("sum of array:%d\n",ans);
    printf("average  of array:%.2f",(float)ans/n);
}