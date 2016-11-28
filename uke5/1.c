#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int r = 3, c = 5;

void addToArray(int elements[r][c], int value);
void printResult(int elements[r][c]);
int rand_lim(int limit);
void sortRow(int (*p)[c]);
static int compare_int(void const *v1, void const *v2);

int main(int argc, char *argv[]) {
    int elements[r][c];
    memset(elements, 0, sizeof elements);
    int maxElements = r * c;
    int countElements = 0;
    int inputA[maxElements];

    // Get all integers from user input
    for (int i = 0; i < maxElements; i++) {
        scanf("%d", &inputA[i]);
        countElements++;
    }

    // Add integers to random place in array
    for (int i = 0; i < maxElements; i++) {
        addToArray(elements, inputA[i]);
    }

    // Sort the array
    for (int i = 0; i < r; ++i) {
        sortRow(&elements[i]);
    }
    printResult(elements);
}

void addToArray(int elements[r][c], int value) {
    int randR, randC, added = 0;
    while (added == 0) {
        randR = rand_lim(r-1);
        randC = rand_lim(c-1);
        if (elements[randR][randC] == 0) {
            elements[randR][randC] = value;
            added = 1;
        }
    }
}

void printResult(int elements[r][c]) {
    puts("\noutput:\n");
    printf("%2s", "");
    for (int i = 1; i <= c; i++) {
        printf("%2d", i);
    }
    printf("\n%2s", "");
    for (int i = 0; i < c; i++) {
        printf("%2s", "-");
    }
    for (int i = 0; i < r; i++) {
        printf("\n%d| ", i);
        for (int j = 0; j < c; j++) {
            printf("%-2d", elements[i][j]);
        }
    }
}

void sortRow(int (*p)[c]) {
    qsort(p[0], (size_t) c, sizeof(p[0][0]), compare_int);
}

/* http://stackoverflow.com/a/2999130/5506722 */
int rand_lim(int limit) {
/* return a random number between 0 and limit inclusive.
 */

    int divisor = RAND_MAX/(limit+1);
    int retval;

    do {
        retval = rand() / divisor;
    } while (retval > limit);

    return retval;
}

/* http://stackoverflow.com/a/22019237/5506722 */
static int compare_int(void const *v1, void const *v2) {
    int i1 = *(int *)v1;
    int i2 = *(int *)v2;
    if (i1 < i2)
        return -1;
    else if (i1 > i2)
        return +1;
    else
        return 0;
}