#include<stdio.h>

void cube()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    printf("cube=%d:%d",a,a*a*a);
}
int main()
{
     cube();
}