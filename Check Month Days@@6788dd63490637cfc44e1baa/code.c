#include <stdio.h>

#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // It's a leap year
    }
    return 0; // It's not a leap year
}

int main() {
    int month;

    scanf("%d", &month);

    // Display the number of days in the month
    switch (month) {
        case 1: // January
            printf("31");
            break;
        case 2: // February
            printf("28\n");
            break;
        case 3: // March
            printf("31\n");
            break;
        case 4: // April
            printf("30\n");
            break;
        case 5: // May
            printf("31\n");
            break;
        case 6: // June
            printf("30\n");
            break;
        case 7: // July
            printf("31\n");
            break;
        case 8: // August
            printf("31\n");
            break;
        case 9: // September
            printf("30\n");
            break;
        case 10: // October
            printf("31\n");
            break;
        case 11: // November
            printf("30\n");
            break;
        case 12: // December
            printf("31\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    }

    return 0;
}
