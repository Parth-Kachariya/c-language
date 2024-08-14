//task-1
#include<stdio.h>
int getINT()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    return n;
}
int getarraysum(int a[],int n)
{
    int sum=0;
    for(int i=0; i<n ;i++)
    {
        sum+=a[i];
    }
    return sum;
}
//task-2
