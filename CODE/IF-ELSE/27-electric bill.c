#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 2;
    }
    else if (units <= 200) {
        bill = units * 3;
    }
    else if (units <= 300) {
        bill = units * 5;
    }
    else {
        bill = units * 7;
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}
