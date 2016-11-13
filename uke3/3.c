#include <stdio.h>
#include <stdlib.h>

// Check if number is odd or even
int main(int argc, char *argv[]) {
    if (argc > 0) {
        int number = atoi(&argv[1][0]);
        if (number == 0) {
            puts("Please provide a non-zero integer as argument!");
            return -1;
        }
        if (number % 2) {
            printf("Number %d is read and it is odd", number);
        } else {
            printf("Number %d is read and it is even", number);
        }
    }
}