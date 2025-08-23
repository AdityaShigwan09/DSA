#include<stdio.h>

int main(){
    int arr[]={1,2,5,3,4,4,5,6,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int temp=0;

    for(int i=1;i<size;i++){
	if(max<arr[i])
	{
		max=arr[i];
		temp=i;
	}
}
arr[temp]=0;
max=arr[0];
    for(int i=1;i<size;i++){
	if(max<arr[i])
	{
		max=arr[i];
	}
}


printf("%d",max);

return 0;
}