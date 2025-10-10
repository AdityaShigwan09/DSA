#include<stdio.h>
#define SIZE 20

int MAX_Element(int A[],int n){
	int mx=A[0];
	for(int i=1;i<n;i++){
		if(mx<A[i]){
			mx=A[i];
		}
	}
	return mx;
}


int main(){
int A[]={5,1,7,3,9,2,5};

int B[SIZE]={0};
int C[SIZE]={0};

int n=sizeof(A)/sizeof(A[0]);
int k=MAX_Element(A,n);

printf("Original Array :");
for(int i=0;i<n;i++){
printf("\t%d ",A[i]);
}


for(int i=0;i<=k;i++){
	C[i]=0;
}

for(int i=0;i<n;i++){
 C[A[i]]=C[A[i]]+1;
}

for(int i=1;i<=k;i++){
C[i]=C[i]+C[i-1];
}

for(int i=n-1; i>=0;i--){
B[C[A[i]]-1]=A[i];
 C[A[i]]=C[A[i]]-1;
}

printf("\n\nSorted Array   :");
for(int i=0;i<n;i++){
printf("\t%d ",B[i]);
}

return 0;
}