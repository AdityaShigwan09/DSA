#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


int partition(int arr[], int low, int high) {
    int pivot = arr[low];  
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, high);
    return (i + 1);
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf(" %d\t", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {5, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array :");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted Array   :");
    printArray(arr, n);

    return 0;
}
