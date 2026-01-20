
//Q10) Write Algorithm to print even number between 1 to 20 using for loop
#include<stdio.h>
int main(){
    printf("Even Number in Between 1 to 20 :");
    for (int i=1;i<=20;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    return 0;
}