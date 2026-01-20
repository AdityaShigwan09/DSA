//Q1) Write Program to Calculate Factorial of n (iterative)

#include<stdio.h>


int main(){
    int fact=1,i=0,n=0;

    printf("Enter The Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("Factorial of %d is %d",n,fact);
    return 0;
}
