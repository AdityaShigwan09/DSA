#include <stdio.h>

int main() {
    
int arr[] = {11, 1, 8, 4, 6};
int size = sizeof(arr) / sizeof(arr[0]);   
int temp, minIndex;
    
printf("Original Array: ");
 
for (int i = 0; i < size; i++) {      
printf("%d ", arr[i]); 
}
    
for (int i = 0; i < size - 1; i++) {       
minIndex = i;
for (int j = i + 1; j < size; j++) {         
if (arr[j] < arr[minIndex]) {              
 minIndex = j;          
}      
}
  
 temp = arr[i];
 arr[i] = arr[minIndex];    
arr[minIndex] = temp;
}    

printf("\nSorted Array: ");  
for (int i = 0; i < size; i++) {      
printf("%d ", arr[i]);
}
return 0;
}
