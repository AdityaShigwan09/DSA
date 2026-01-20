#include <stdio.h>

int main() {
    int arr[] = {25, 32, 48, 41, 21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i, j, temp;


    printf("Original Array :");
    for (i = 0; i < n; i++) {
        printf("\t%d ", arr[i]);
    }


    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("\nSorted Array   : ");
    for (i = 0; i < n; i++) {
        printf("\t%d ", arr[i]);
    }

    return 0;
}
