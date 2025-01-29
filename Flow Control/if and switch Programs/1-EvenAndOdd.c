#include <stdio.h>

int main() {
    unsigned short numberForWorkWithThat;
    scanf("%hu", &numberForWorkWithThat);
    if (numberForWorkWithThat % 2 == 0) {
        printf("Even");
    } else if(numberForWorkWithThat % 2 == 1) {
        printf("Odd");
    }
    return 0;
}
