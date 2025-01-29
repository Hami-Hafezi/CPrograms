#include <stdio.h>
int main(){
    char charForWorking;
    scanf("%c",&charForWorking);
    switch (charForWorking) {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("This is a digit.\n");
            break;
        case 'a':
        case 'e':
        case 'o':
        case 'i':
        case 'u':
            printf("This is a vowel.\n");
            break;
        default:
            printf("this is other characters.\n");
    }
    return 0;
}