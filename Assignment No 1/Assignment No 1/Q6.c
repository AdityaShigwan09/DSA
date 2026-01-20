//Q6) Write program for Sequential Search (Iterative)


#include<stdio.h>
#include<stdbool.h>

#define MAX 50
int main(){
	int arr[MAX];
	int n,i=0;
	int find=0;
	bool b=false;
	
	printf("Enter The Size of Array :");
	scanf("%d",&n);

	printf("\nEnter %d Number :",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\nList of Array Elements :");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter the number from above list :");
	scanf("%d",&find);
	for(i=0;i<n;i++){
		if(find==arr[i]){
			b=true;
		}
	}

if(b){
	printf("\nExist in the above List" );
}
else{
	printf("\nNot Exist in the above list");
}
return 0;

}
