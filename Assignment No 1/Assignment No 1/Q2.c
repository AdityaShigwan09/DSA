//Q2) Write algorithm to print Greates Nmber of 3 number without using loop
#include<stdio.h>
#include<conio.h>

int main(){
	int n1,n2,n3;
	
	printf("Enter the any 3 Number :");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2&&n1>n3){
		printf("Greatest Number is %d",n1);
	}
	else if(n2>n1&&n2>n3){
		printf("Greatest Number is %d",n2);
	}
	else if(n3>n1&&n3>n2){
		printf("Greatest Number is %d",n3);
	}
	else if(n1==n2&& n2==n3){
		printf("Equal Numbers");
	}
	else{
		printf("Invaild Input Try Again !!!");
	}
	return 0;
}
