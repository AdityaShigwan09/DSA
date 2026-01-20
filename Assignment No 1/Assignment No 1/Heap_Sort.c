#include <stdio.h>

#define MAX 100

void MaxHeapify(int a[], int i, int n) {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    int temp;

    if (left <= n && a[left] > a[largest])
        largest = left;
    if (right <= n && a[right] > a[largest])
        largest = right;

    if (largest != i) {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        MaxHeapify(a, largest, n);
    }
}

void BuildMaxHeap(int a[], int n) {
    for (int i = n / 2; i >= 1; i--)
        MaxHeapify(a, i, n);
}

void HeapSort(int a[], int n) {
    BuildMaxHeap(a, n);
    for (int i = n; i >= 1; i--) {
        int temp = a[1];
        a[1] = a[i];
        a[i] = temp;
        MaxHeapify(a, 1, i - 1);
    }
}

int main() {
    int arr[MAX];
    int input[] = {43, 99, 21, 34, 60};  
    int n = sizeof(input) / sizeof(input[0]);


    for (int i = 0; i < n; i++) {
        arr[i + 1] = input[i];
    }

    printf("Original Array :");
    for (int i = 1; i <= n; i++) {
        printf(" %d\t", arr[i]);
    }
    printf("\n");

    HeapSort(arr, n);

    printf("Sorted Array   :");
    for (int i = 1; i <= n; i++) {
        printf(" %d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
