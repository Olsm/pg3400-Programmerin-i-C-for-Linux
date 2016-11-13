#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

unsigned long GetTime() {
    struct timeval tv;
    gettimeofday(&tv,NULL);
    return tv.tv_sec*(unsigned long)1000000+tv.tv_usec;
}

int fibonacci(int n) {
    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;
    else
        return ( fibonacci(n-1) + fibonacci(n-2) );
}

int calculateFibonacci(int n) {
    int fib = 0;
    for (int i = 1 ; i <= n ; i++) {
        fib = fibonacci(i);
        i++;
    }
    return fib;
}

int main(int argc, char *argv[]) {
    unsigned long timeStart, timeEnd;
    int n;

    if (argc > 0) {
        n = atoi(&argv[1][0]);
        if (n == 0) {
            puts("Please provide a non-zero integer as argument!");
            return -1;
        }
    }

    timeStart = GetTime();

    printf("Fibonacci series\n");

    printf("%d \n", calculateFibonacci(n));

    timeEnd = GetTime();
    printf("The elapsed time is %ld ms", (timeEnd - timeStart)/1000);
}