#include <stdio.h>

int main() {
    int number, numberOfDivisors =0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
            numberOfDivisors += 1;
        }
    }
    printf("we have : %d\n divisors", numberOfDivisors);
    return 0;
}