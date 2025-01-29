#include <stdio.h>

int main() {
    printf("tell me number of day of the week? (From 1 to 7) \n");
    int day;
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day number");
    }

    return 0;

}