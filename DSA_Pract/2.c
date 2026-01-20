#include<stdio.h>


void Heap_sort(int arr[],int n);
void heapify(int arr[],int n,int i);

int main(){
int arr[]={30,21,40,10,2};
int n=sizeof(arr)/sizeof(arr[0]);

Heap_sort(arr,n);

for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;
}

void Heap_sort(int arr[],int n){
for(int i=n/2-1;i>=0;i--){
	heapify(arr,n,i);
}
for(int i=n-1;i>=0;i--){
	int temp=arr[0];
	arr[0]=arr[i];
	arr[i]=temp;
	
	heapify(arr,i,0);
}
}

void heapify(int arr[],int n,int i){
int largest=1;
int left=2*i+1;
int right=2*i+2;

if(left<n&&arr[left]>arr[largest]){
	largest=left;
}
if(right<n&&arr[right]>arr[largest]){
	largest=right;
}

if(largest!=i){
int temp=arr[largest];
arr[largest]=arr[i];
arr[i]=temp;

heapify(arr,i,largest);
}
}