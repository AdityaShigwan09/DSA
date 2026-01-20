#include<stdio.h>

void swap(int arr[],int i,int j);
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);

int main(){
int arr[]={90,51,10,21,34};
int n=sizeof(arr)/sizeof(arr[0]);

quicksort(arr,0,n-1);

for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;
}

void swap(int arr[],int i,int j){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}

void quicksort(int arr[],int low,int high){
if(low<high){
int pi=partition(arr,low,high);

quicksort(arr,low,pi-1);
quicksort(arr,pi+1,high);
}
}

int partition(int arr[],int low,int high){
int pivot=arr[low];
int i=low;
int j=high;

while(i<j){
while(arr[i]<=pivot&&i<=high-1){
i++;
}
while(arr[j]>pivot&&j>=low+1){
j--;
}
if(i<j){
swap(arr,i,j);
}
}
swap(arr,low,j);
return j;
}


