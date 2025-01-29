#include <stdio.h>

int main() {
    short number1, number2,numberOfCommonDivisors = 0;
    printf("Enter two short integers: ");
    scanf("%hd%hd", &number1, &number2);
    for (int i = 1; i <= number1; i++) {
        if (number1 % i == 0 && number2 % i == 0) {
            printf("%d \t", i);
            numberOfCommonDivisors += 1;
        }

    }
    printf("\n count of divisors is : %hd\n", numberOfCommonDivisors);

    return 0;

}