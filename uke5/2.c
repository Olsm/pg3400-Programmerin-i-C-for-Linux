#include <stdio.h>

int stringLength(char string[]) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

int main(void) {
    char string[] = "test";
    int length = stringLength(string);
    printf("%d", length);
}