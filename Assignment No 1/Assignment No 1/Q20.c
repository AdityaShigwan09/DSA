//Q20) Write Recursive algorithm for Sequential Search

#include<stdio.h>
#define MAX 50


int RSuqential(int arr[],int totalsize,int value,int index){
	if(index>=totalsize){
		return -1;
	}
	if(arr[index]==value){
		return index;
	}
	return RSuqential(arr,totalsize,value,index+1);
}
int main(){
	int a[MAX];
	int size,i;
	int num;

	printf("Enter the Size of Arrray :");
	scanf("%d",&size);

	printf("Enter %d ELement into array :",size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}

	printf("Enter The Element To Search : ");
	scanf("%d",&num);

	int res=RSuqential(a,size,num,0);

	if(res==-1){
		printf("\nNot Exist in the above List");
	}
	else{
		printf("Exist in the above List");
	}
	return 0;
}