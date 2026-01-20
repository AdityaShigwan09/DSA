#include <stdio.h>

int binary_Search(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  
        
        
        if (arr[mid] == target)
            return mid;  
        
        
        if (arr[mid] < target)
            left = mid + 1;
    
        else
            right = mid - 1;
    }
    
    return -1; 
}

int main() {
    int arr[] = {2, 5, 7, 10, 13, 17, 20};  
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Original Array : ");
    for(int i=0;i<size;i++){
        printf("\t %d",arr[i]);
    }

    printf("\nEnter Element to Search :");
    scanf("%d",&target);

    int result = binary_Search(arr, size, target);
    if (result != -1)
        printf("Element %d is found at index %d\n", target,result);
    else
        printf("Element not found\n");

    return 0;
}
