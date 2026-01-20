//Q12) Write a algorithm to print odd Number between 11 and 40 using repeat until loop 

#include<stdio.h>
int main(){
    int i=11;
    printf("Odd Number Using Do While Loop :");
    do{
        if(i%2==1){
            printf(" %d",i);
        }
        i++;
    }while(i<=40);

    return 0;
}