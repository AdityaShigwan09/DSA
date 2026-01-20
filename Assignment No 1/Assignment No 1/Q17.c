//Q17) Write Recursive algorithm for Factorial of Number 

#include<stdio.h>

int fact(n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int num=0;
    printf("Enter The Number :");
    scanf("%d",&num);

    printf("Factorial of %d is %d",num,fact(num));
    return 0;
}