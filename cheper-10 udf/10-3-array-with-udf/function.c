#include<stdio.h>

int getInt()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    return n;
}
int getArrayinput(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
}
//1

int printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:%d\n",i,a[i]);
        
    }    
}

int getchoice()
{
    int c;
    printf("Enetr your choice:");
    scanf("%d",&c);
    return c;
}
//2
int getArraysum(int a[],int n)
 {
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
 }
 //3
 int getArrayavg(int a[],int n)
 {
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum/n;
 }



 //4 
 int temp;

int getassnding(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array elements:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
//5
int getdisnding(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array elements:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
//6
int getarraymax(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nArray elements:%d",max);
    return max;
    
}
//7
int getarraymin(int a[],int n)
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nArray elements:%d",min);
    return min;
    
}
 
 
 
 
 












 