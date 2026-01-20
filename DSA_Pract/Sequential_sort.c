//Sequential_Search

#include<stdio.h>

int search(int arr[],int n, int key){
int i;
for(i=0;i<n;i++){
if(key==arr[i]){
return i;
}
}
return -1;
}

int main(){

int arr[5]={1,2,3,4,5};//Sorted Array
int n=sizeof(arr)/sizeof(arr[0]);
int key=4;

int res=search(arr,n,key);
if(res!=-1){
printf("%d Found at index %d",key,res);
}
else{
printf("%d Not Found",key);
}

return 0;
}