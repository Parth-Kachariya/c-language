#include<stdio.h>

int main()
{
    int y1,y2;

    printf("Enter y1: ");
    scanf("%d",&y1);

    printf("Enter y2: ");
    scanf("%d",&y2);

    int size = (y2-y1)/4 + 1;

    int a[size],index = 0;

    for(int i=y1; i<=y2; i++) {
        if(i%4==0) {
            a[index++] = i;
        }
    }

    printf("Leap years: ");
    for(int i=0; i<index; i++) {
        printf("%d ",a[i]);
    }

}