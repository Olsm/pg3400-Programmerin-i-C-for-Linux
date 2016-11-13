#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = rand()%20;
    int isDivisibleByAny = 0;

    int numbers[] = {2, 3, 5, 7, 11, 13, 17, 19};

    for (int i = 0; i <= 7; ++i) {
        switch(a % numbers[i]) {
            case 0:
                printf("%d is divisible by %d \n", a, numbers[i]);
                isDivisibleByAny = 1;
        }
    }

    switch(isDivisibleByAny) {
        case 0:
            printf("%d is a prime or 1", a);
    }
}