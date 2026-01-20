//Q11) Write a algorithm to print table of 4 in reverse order using for loop 

#include<stdio.h>
int main(){
    int n=4;
    printf("Table of 4 in Reverse Order");
    for(int i=10;i>=1;i--){
        printf("\n%d",i*n);
    }
    return 0;
}