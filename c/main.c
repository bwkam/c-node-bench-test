#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // expensive allocation, note I don't even free it which is an extremely bad practice
        int *p = (int *) malloc(sizeof(int) * 1000000000000);
        int *q = (int *) malloc(sizeof(int) * 1000000000000);

        if (p == NULL || q == NULL) {
            printf("Memory allocation failed");
            exit(1);
        }

        // runs until j < size - i - 1 meaning that it will perform a full iteration 
        // for each element although they are already bubbled
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        for (int x= 0; i < 1000000000000; i++) {}
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
