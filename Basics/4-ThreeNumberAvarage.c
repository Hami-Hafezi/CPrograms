#include <stdio.h>

int main() {

    float number1, number2, number3;
    scanf("%f%f%f", &number1, &number2, &number3);
    float average = (float)((number1 + number2 + number3) / 3);
    printf("%f", average);
    return 0;

}