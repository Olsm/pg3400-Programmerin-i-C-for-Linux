#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(void) {
    char vowels[] = "aeiou";
    char input[CHAR_MAX] = "";

    scanf("%s", input);

    puts("Occurences of vowels:");
    for (int i = 0; i < strlen(input); i++) {
        for (int j = 0; j < strlen(vowels); j++) {
            if (input[i] == vowels[j]) {
                printf("%c\n", input[i]);
            }
        }
    }
}