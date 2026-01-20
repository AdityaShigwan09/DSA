
//Q13) Write algorithm for factorial using repeat until loop

#include<stdio.h>
int main(){
    int n=5;
    int i=1;
    int fact=1;
    do{
        if(n==1){
            fact=1;
        }
        else{
            fact=fact*i;
        }
        i++;
    }while(i<=n);

    printf("Factorial of %d is %d",n,fact);

    return 0;
}