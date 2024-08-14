#include<stdio.h>

int getIntA()
{
    int a;
    printf("Enter first number:");
    scanf("%d",&a);
    return a;
}
int getIntB()
{
    int b;
    printf("Enter second number:");
    scanf("%d",&b);
    return b;
}
int getchoice()
{
    int c;
    printf("Enetr your choice:");
    scanf("%d",&c);
    return c;
}
int sum(int a,int b)
{
    return a+b;
}
int multi(int a,int b)
{
    return a*b;
}
int sub(int a,int b)
{
    return a-b;
}
int div(int a,int b)
{
    return a/b;
}
int mod(int a,int b)
{
    return a%b;
}