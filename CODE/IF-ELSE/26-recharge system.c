#include <stdio.h>

int main() {

    int amount;
    float data;
    int validity;

    printf("====================================\n");
    printf("       MOBILE RECHARGE ANALYZER\n");
    printf("====================================\n");

    printf("\nEnter Recharge Amount: Rs. ");
    scanf("%d", &amount);


    if (amount == 199) {

        data = 2.0;
        validity = 28;

    }
    else if (amount == 299) {

        data = 1.5;
        validity = 28;

    }
    else if (amount == 399) {

        data = 2.0;
        validity = 56;

    }
    else if (amount == 499) {

        data = 2.5;
        validity = 84;

    }
    else if (amount == 599) {

        data = 3.0;
        validity = 84;

    }
    else {

        printf("\nInvalid Recharge Plan!\n");
        return 0;
    }


    printf("\n====================================\n");
    printf("          RECHARGE DETAILS\n");
    printf("====================================\n");

    printf("Amount   : Rs. %d\n", amount);
    printf("Data     : %.1f GB/day\n", data);
    printf("Validity : %d Days\n", validity);

    printf("====================================\n");
    printf("       RECHARGE SUCCESSFUL!\n");
    printf("====================================\n");

    return 0;
}
