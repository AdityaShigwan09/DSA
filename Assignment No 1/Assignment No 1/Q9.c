//Q9) Write progrsm for selection sort by calling min/max algorithm
#include<stdio.h>

int main(){
	int max=50,min=0;
	int arr[max];
	int n,i,j;
	printf("How Many element you wnat to enter :");
	scanf("%d",&n);
	
	printf("Enter %d Number",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				min=j;
			}
		}
		if(min!=i){
			arr[i]=arr[i]+arr[min];
			arr[min]=arr[i]-arr[min];
			arr[i]=arr[i]-arr[min];
		}
	}
	printf("Sorted Array :");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
