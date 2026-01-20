//Q7) Write a program to find Maximum Number from above list

#include<stdio.h>


int main(){
	
	int arr[]={10,20,30,40,50};
	int i=0;
	int size=sizeof(arr)/sizeof(arr[0]);
	int temp=arr[0];
	
	for(i=1 ;i<size;i++){
		if(temp<arr[i])
		{
			temp=arr[i];
				
		}
		
	}
	
	printf("Array ELement : %d ",arr[0]);
	for(i=1 ;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\nMaximum Number from above list is %d",temp);
	return 0;	
}
