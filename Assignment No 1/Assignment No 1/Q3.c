//Q3) Write a program to check whether given number is prime

#include<stdio.h>

int main(){
	int n,i,prime=1;
	
	printf("Enter the Number :");
	scanf("%d",&n);
	
	if(n<=1){
		prime=0;
	}
	else{
		for (i=2 ; i*i<=n;i++){
			if(n%i==0){
				prime=0;
				break;
			}
		}
	}
	if(prime){
		printf("%d is Prime Number",n);
	}
	else{
		printf("%d is Not Prime Number",n);
	}
}
