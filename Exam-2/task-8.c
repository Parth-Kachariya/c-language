#include <stdio.h>

int main() {
    int a;
    printf("entre auto ");
    scanf("%d",&a);
    int n;
    printf("entre n ");
    scanf("%d",&n);

    while (a<= n) {
        printf("%d ", a);
        a += 8;
    }

    printf("\n");
}