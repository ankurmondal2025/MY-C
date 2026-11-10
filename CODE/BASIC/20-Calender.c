 #include <stdio.h>

int main()
{
    int totalDays;
    int years, months, weeks, days;
    int remainingDays;

    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;

    remainingDays = totalDays % 365;

    months = remainingDays / 30;

    remainingDays = remainingDays % 30;

    weeks = remainingDays / 7;

    days = remainingDays % 7;

    printf("\nYears  = %d\n", years);
    printf("Months = %d\n", months);
    printf("Weeks  = %d\n", weeks);
    printf("Days   = %d\n", days);

    return 0;
}
