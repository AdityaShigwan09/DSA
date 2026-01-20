//Bubble Sort

#include<stdio.h>



int main(){

int a[5]={10,39,29,21,6};
int n=sizeof(a)/sizeof(a[0]);
int i,j,temp;

for(i=0;i<n;i++){
for(j=0;j<n-i;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}

for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
}