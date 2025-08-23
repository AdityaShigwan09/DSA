//Array the Reverse and Store the Reverse Array in Same Array Variable.
#include<stdio.h>

int main(){
int a[]={1,2,3,4,5};

int n=sizeof(a)/sizeof(a[0]);
int temp=0;
for(int i=0;i<n/2;i++){
	temp=a[i];
	a[i]=a[n-i-1];
	a[n-i-1]=temp;	
}

for(int i=0;i<n;i++){
printf("%d",a[i]);
}

}