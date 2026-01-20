#include<stdio.h>


void countsort(int A[],int B[],int n);
int max(int A[],int n);


int main(){
int A[]={10,34,5,21,15};
int n=sizeof(A)/sizeof(A[0]);

int B[n];

countsort(A,B,n);

for(int i=0;i<n;i++){
	printf("%d ",B[i]);
}
return 0;
}

void countsort(int A[],int B[],int n){
int k=max(A,n);

int C[k+1];
int i;

for(i=0;i<=k;i++){
C[i]=0;
}

for(i=0;i<n;i++){
C[A[i]]++;
}
for(i=1;i<=k;i++){
C[i]=C[i]+C[i-1];
}

for(i=n-1;i>=0;i--){
B[C[A[i]]-1]=A[i];
C[A[i]]--;
}
}

int max(int A[],int n){
int m=A[0];

for(int i=1;i<n;i++){
if(m<A[i]){
m=A[i];
}
}
return m;
}