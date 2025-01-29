#include <stdio.h>

int main() {
    long number1, number2, number3;
    scanf("%ld%ld%ld", &number1, &number2, &number3);
    if (number1 > number2) {
        if (number1 > number3) {
            printf("%ld",number1);
        }

    }
    if (number2 > number3) {
        if (number2 > number1) {
            printf("%d",number2);
        }

    }
    if (number3 > number2) {
        if (number3 > number1) {
            printf("%ld",number3);
        }

    }
    return 0;
}