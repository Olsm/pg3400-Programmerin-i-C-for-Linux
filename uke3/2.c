#include <stdio.h>

// I guess values of task 1 will be: a: 6, b: 8, c: 7, d: 8

void task1() {
    int a,b,c,d;

    a = 5;
    b = a++; // a: 6, b: 5
    c = ++b; // a: 6, b: 6, c: 6
    d = b++; // a: 6, b: 7, c: 6, d: 6

    printf("a: %d, b: %d, c: %d, d: %d \n", a, b, c, d);
    // a: 6, b: 7, c: 6, d: 6
}

// I guess the values of task 2 will be: x: 10, y: 11, z: 18, w: 8
// If wont be true so "This is obviously true" wont be printed

void task2() {
    int x,y,z,w;

    x = 10;
    y = 9;
    z = 8;
    w = 7;

    if ((x == y++) && (z == ++x)) {
        w = 100;
        printf("This is obviously true");
    }

    // 1. x: 10, y: 10, z: 8, w: 7

    z = ++w + y++;

    printf("x: %d, y: %d, z: %d, w: %d \n", x, y, z, w);
    // z: 18, w: 8, y: 11
}

int main(void) {
    puts("Task 1");
    task1();

    puts ("\nTask 2");
    task2();
}