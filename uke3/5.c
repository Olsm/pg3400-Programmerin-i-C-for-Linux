#include <stdio.h>
#include <stdlib.h>

int main(void) {
    {
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

    // For
    {
        int a = rand()%40;
        int sum = 0;
        for (int i = a; i > 0; i--) {
            sum = sum + a--;
        }
        printf("sum is %d \n", sum);
    }

    // Do while
    {
        int a = rand()%40;
        int sum = 0;
        do {
            sum = sum + a--;
        } while (a > 0);
        printf("sum is %d \n", sum);
    }
}