#include<stdio.h>


int main(){

int arr[]={5,2,4,1,3};
int n=sizeof(arr)/sizeof(arr[0]);
int item,j;


printf("Original Array :");

for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}

for(int i=1;i<n;i++){
	item=arr[i];
	j=i-1;
	while(j>=0&&item<arr[j]){
		arr[j+1]=arr[j];
		j=j-1;
	}
	arr[j+1]=item;
}

printf("\nSorted Array :");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}

return 0;
}