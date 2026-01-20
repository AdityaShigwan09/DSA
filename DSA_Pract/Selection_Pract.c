//Selection_Sort

#include<stdio.h>

int main(){

int arr[5]={67,23,99,21,4};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j,temp,max_i;

for(i=0;i<n;i++){
max_i=i;
for(j=0;j<n;j++){
if(arr[max_i]<arr[j]){
max_i=j;
}
temp=arr[max_i];
arr[max_i]=arr[i];
arr[i]=temp;
}

}

for(i=0;i<n;i++){

printf("%d ",arr[i]);
}
return 0;
}