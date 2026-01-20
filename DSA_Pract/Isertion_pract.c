//Insertion Sort
#include<stdio.h>

int main(){
int arr[5]={34,67,21,0,18};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j,temp;

for(i=1;i<n;i++){
	temp=arr[i];
	j=i-1;
	while(j>=0&&temp<arr[j]){
		arr[j+1]=arr[j];
		j=j-1;
	}
	arr[j+1]=temp;
}

for(i=0;i<n;i++){
	printf("%d ",arr[i]);
}
return 0;
}