//Binary_search
#include<stdio.h>


int Binary(int arr[],int n,int key){
int left=0;
int right=n;
int mid;
while(left<=right){
mid=left+(right-left)/2;

if(arr[mid]==key){
return arr[mid];
}

if(arr[mid]<key){
left=mid+1;
}
else{
right=mid-1;
}
}
return -1;
}

int main(){
int arr[5]={1,2,3,4,5};//Sorted array
int n=sizeof(arr)/sizeof(arr[0]);
int key=5;
int res=Binary(arr,n,key);

if(res != -1){
printf("%d Found at index %d",key,res);
}
else{
printf("%d Not Found",key );
}
return 0;
}



