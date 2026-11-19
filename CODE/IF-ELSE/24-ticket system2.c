#include <stdio.h>

int main() {

    int train;

    printf("=============================\n");
    printf("     MINI RAILWAY TRACKER\n");
    printf("=============================\n");

    printf("\nEnter Train Number: ");
    scanf("%d", &train);

    if (train == 12345) {

        printf("\nTrain Found!\n");
        printf("Train No. : 12345\n");
        printf("Route     : Howrah -> Delhi\n");
        printf("Status    : Running\n");
        printf("Station   : Bardhaman\n");
    }
    else if (train == 12801) {

        printf("\nTrain Found!\n");
        printf("Train No. : 12801\n");
        printf("Route     : Puri -> New Delhi\n");
        printf("Status    : On Time\n");
        printf("Station   : Durgapur\n");

    }
    else {

        printf("\nTrain Not Found!\n");

    }

    return 0;
}
