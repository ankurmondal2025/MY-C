#include <stdio.h>

int main() {

    int m1, m2, m3, m4, m5, m6;
    int total, highest, lowest;
    float percentage;

    printf("====================================\n");
    printf("        STUDENT RESULT SYSTEM\n");
    printf("====================================\n");

    printf("\nEnter marks of 6 subjects:\n");

    printf("Subject 1: ");
    scanf("%d", &m1);

    printf("Subject 2: ");
    scanf("%d", &m2);

    printf("Subject 3: ");
    scanf("%d", &m3);

    printf("Subject 4: ");
    scanf("%d", &m4);

    printf("Subject 5: ");
    scanf("%d", &m5);

    printf("Subject 6: ");
    scanf("%d", &m6);


    // Total
    total = m1 + m2 + m3 + m4 + m5 + m6;

    // Percentage
    percentage = total / 6.0;


    // Highest
    highest = m1;

    if (m2 > highest)
        highest = m2;

    if (m3 > highest)
        highest = m3;

    if (m4 > highest)
        highest = m4;

    if (m5 > highest)
        highest = m5;

    if (m6 > highest)
        highest = m6;


    // Lowest
    lowest = m1;

    if (m2 < lowest)
        lowest = m2;

    if (m3 < lowest)
        lowest = m3;

    if (m4 < lowest)
        lowest = m4;

    if (m5 < lowest)
        lowest = m5;

    if (m6 < lowest)
        lowest = m6;


    // Result
    printf("\n====================================\n");
    printf("             RESULT\n");
    printf("====================================\n");

    if (m1 >= 40 && m2 >= 40 && m3 >= 40 &&
        m4 >= 40 && m5 >= 40 && m6 >= 40) {

        printf("Result     : PASS\n");
    }
    else {
        printf("Result     : FAIL\n");
    }

    printf("Total      : %d / 600\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Highest    : %d\n", highest);
    printf("Lowest     : %d\n", lowest);

    printf("====================================\n");

    return 0;
}
