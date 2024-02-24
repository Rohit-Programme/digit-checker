//write a programmme to gaiven character is digit or not is digit or not
#include<stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (character >= '0' && character <= '9') {
        printf("The character is a digit: %c", character);
    }
    else {
        printf("The character is not a digit");
    }

    return 0;
}
