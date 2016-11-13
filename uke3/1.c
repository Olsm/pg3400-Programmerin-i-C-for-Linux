#include <stdio.h>

int main(void) {
    printf("int: %zu \n", sizeof(int));
    printf("float: %zu \n", sizeof(float));
    printf("double: %zu \n", sizeof(double));
    printf("long: %zu \n", sizeof(long));
    printf("signed: %zu \n", sizeof(signed));
    printf("unsigned: %zu \n", sizeof(unsigned));
    printf("int *: %zu \n", sizeof(int *));
    printf("float *: %zu \n", sizeof(float *));
    printf("void *: %zu \n", sizeof(void *));
    int array[20];
    printf("int array[20]: %zu", sizeof(array));
}