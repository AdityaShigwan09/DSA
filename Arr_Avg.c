//Average of Array Elements and Store the Average at 0 index 

#include<stdio.h>
int main(){
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
int sum=0;
for(int i=0;i<size;i++){
sum=arr[i]+sum;
}
arr[0]=sum/size;
printf("%d",arr[0]);
return 0;
}