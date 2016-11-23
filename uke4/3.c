#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int intArray[], int elements) {
    int i, j, k;
    int temp;

    for (i = 0; i < elements - 1 ; i++) {
        for (j = i + 1; j < elements; j++) {
            if (intArray[i] > intArray[j]) {
                temp = intArray[i];
                intArray[i] = intArray[j];
                intArray[j] = temp;
            }
        }
    }

    // Print the output
    printf("Number of inputs: %d \n", elements);
    printf("Sorted list: \n");
    for (k = 0; k < elements; k++) {
        printf("%d \n", intArray[k]);
    }
}

int main(void) {
    int intArray[100];
    int i, items;

    while (1) {
        scanf("%d", &i);
        if (i == 0) break;
        if (sizeof(intArray) < items)
            realloc(intArray, (size_t) items);
        intArray[items] = i;
        items++;
    }

    bubbleSort(intArray, items);
}

