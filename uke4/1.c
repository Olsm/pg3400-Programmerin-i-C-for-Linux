#include <stdio.h>

/* I expect the sizes to be the pointer size and not the size of the types
 * The pointer is a location of a variable in memory.
 * So I think all the sizes of the pointers of different type will be the same
 * The sizes of the variables will be different as they are different types
 */

int main(void) {
    int *pInt;
    char *pChar;
    short *pShort;
    double *pDouble;

    printf("The size of pointers are %lu, %lu, %lu, %lu respectively \n",
           sizeof(pInt), sizeof(pChar), sizeof(pShort), sizeof(pDouble));

    printf("The size of variables are %lu, %lu, %lu, %lu respectively \n",
           sizeof(*pInt), sizeof(*pChar), sizeof(*pShort), sizeof(*pDouble));
}

/* Pointers = 8
 * Variables = int: 4, char: 1, short: 2, double: 8
 */