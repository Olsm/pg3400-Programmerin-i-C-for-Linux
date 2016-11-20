#include <stdio.h>

int main(void) {
    int a, b;
    int *pa = &a, *pb = &b;

    puts("Type two integers seperated with space");
    scanf("%d %d", pa, pb);

    int biggest;
    if (a > b)
        biggest = a;
    else
        biggest = b;
    printf ("The biggest is %d", biggest);
}