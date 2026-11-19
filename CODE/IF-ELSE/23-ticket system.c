#include <stdio.h>

int main() {

    int age, gender, distance, class, station;
    float fare = 0;

    printf("====================================\n");
    printf("       INDIAN RAILWAY SYSTEM\n");
    printf("====================================\n");

    // Station
    printf("\nSelect Station:\n");
    printf("1. Howrah\n");
    printf("2. Bardhaman\n");
    printf("3. Durgapur\n");
    printf("4. Asansol\n");

    printf("Enter station number: ");
    scanf("%d", &station);

    // Distance
    printf("\nEnter distance (in KM): ");
    scanf("%d", &distance);

    // Age
    printf("Enter age: ");
    scanf("%d", &age);

    // Gender
    printf("\nGender:\n");
    printf("1. Male\n");
    printf("2. Female\n");

    printf("Enter gender: ");
    scanf("%d", &gender);

    // Class
    printf("\nSelect Class:\n");
    printf("1. General\n");
    printf("2. Sleeper\n");
    printf("3. AC\n");

    printf("Enter class: ");
    scanf("%d", &class);


    // Distance validation
    if (distance <= 0) {
        printf("\nInvalid distance!\n");
    }

    // Station validation
    else if (station < 1 || station > 4) {
        printf("\nInvalid station!\n");
    }

    // Age validation
    else if (age <= 0) {
        printf("\nInvalid age!\n");
    }

    // Gender validation
    else if (gender < 1 || gender > 2) {
        printf("\nInvalid gender!\n");
    }

    // Class validation
    else if (class < 1 || class > 3) {
        printf("\nInvalid class!\n");
    }

    else {

        // Base fare according to distance
        if (distance <= 50) {
            fare = 50;
        }
        else if (distance <= 100) {
            fare = 80;
        }
        else if (distance <= 200) {
            fare = 120;
        }
        else {
            fare = 200;
        }


        // Class charge
        if (class == 1) {
            fare = fare;
        }
        else if (class == 2) {
            fare = fare + 100;
        }
        else if (class == 3) {
            fare = fare + 300;
        }


        // Age concession
        if (age < 5) {
            fare = 0;
        }
        else if (age >= 60) {
            fare = fare * 0.60;
        }


        // Female concession
        if (gender == 2 && age >= 5) {
            fare = fare * 0.90;
        }


        // Ticket details
        printf("\n====================================\n");
        printf("          TICKET DETAILS\n");
        printf("====================================\n");

        if (station == 1) {
            printf("Station : Howrah\n");
        }
        else if (station == 2) {
            printf("Station : Bardhaman\n");
        }
        else if (station == 3) {
            printf("Station : Durgapur\n");
        }
        else {
            printf("Station : Asansol\n");
        }

        printf("Distance: %d KM\n", distance);
        printf("Age     : %d\n", age);

        if (gender == 1) {
            printf("Gender  : Male\n");
        }
        else {
            printf("Gender  : Female\n");
        }

        if (class == 1) {
            printf("Class   : General\n");
        }
        else if (class == 2) {
            printf("Class   : Sleeper\n");
        }
        else {
            printf("Class   : AC\n");
        }

        printf("------------------------------------\n");
        printf("Final Fare: Rs. %.2f\n", fare);
        printf("====================================\n");
        printf("       BOOKING SUCCESSFUL!\n");
        printf("====================================\n");
    }

    return 0;
}
