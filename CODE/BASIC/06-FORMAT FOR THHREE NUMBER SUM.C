#include <stdio.h>

int main() {
    int a, b, c, sum;

    printf("Enter the first number");
    scanf("%d", &a);

    printf("Enter the second number");
    scanf("%d", &b);
    printf("Enter he third number");
    scanf("%d", &c);
    sum = a + b + c;

    printf("Sum=%d", sum);

    return 0;
}
