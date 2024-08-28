/*#include <stdio.h>

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
}*/
#include <stdio.h>

int main() {
    float b, h, area;

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter h: ");
    scanf("%f", &h);

    area = (b * h) / 2;

    printf("The area of the triangle : %.2f\n", area);

    return 0;
}