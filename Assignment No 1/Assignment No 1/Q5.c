//Q5) Write program to calculate x raise to n (iterative) x,n,e integer

#include<stdio.h>

int main(){
	int x,n;
	int res=1;

	printf("Enter base (x)");
	scanf("%d",&x);

	printf("Enter Exponent (n)");
	scanf("%d",&n);

	int exp=n;

	if(n<0){
		n=-n;
	}
	for(int i=1;i<=n;i++){
		res*=x;
	}

	printf("%d ^ %d = %d ",x,n,res);
}
