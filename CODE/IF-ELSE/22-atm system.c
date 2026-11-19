#include <stdio.h>

int main() {

    int pin, amount;
    int correctPin = 1235;
    int balance = 100000;
    int miniBalance = 500;

    printf("====== ATM MACHINE ======\n");

    // PIN Verification
    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin == correctPin) {

        printf("\nPIN Verified Successfully!\n");

        // Amount input
        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);

        // Valid amount check
        if (amount <= 0) {
            printf("\nInvalid Amount!\n");
        }
        else if (amount % 100 != 0) {
            printf("\nAmount must be in multiples of 100!\n");
        }
        else if (amount > balance - miniBalance) {
            printf("\nWithdrawal Failed!\n");
            printf("You must maintain a minimum balance of %d\n", miniBalance);
        }
        else {
            balance = balance - amount;

            printf("\nWithdrawal Successful!\n");
            printf("Withdrawn Amount: %d\n", amount);
            printf("Remaining Balance: %d\n", balance);
        }

    }
    else {
        printf("\nIncorrect PIN!\n");
        printf("Transaction Cancelled.\n");
    }

    return 0;
}
