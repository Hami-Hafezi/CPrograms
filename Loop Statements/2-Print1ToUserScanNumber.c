#include <stdio.h>

int main() {
    int userNumberGeted;
    scanf("%d", &userNumberGeted);
    for (int i = 1; i <= userNumberGeted; i++) {
        printf("%d\n", i);
    }
    return 0;
}
