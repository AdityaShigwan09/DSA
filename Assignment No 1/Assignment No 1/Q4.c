//Q4) Write Program to print nth fibonacci Number (Iterative)

#include<stdio.h>
int main(){
	int a=0;
	int b=1,i=0;
	int n=0,fact=0;
	
	printf("Enter The Number :");
	scanf("%d",&n);
	printf("%d%d",a,b);
	for(i=2;i<n;i++){
		fact=a+b;
		a=b;
		b=fact;
		printf("%d",fact);
	}
	return 0;
}
