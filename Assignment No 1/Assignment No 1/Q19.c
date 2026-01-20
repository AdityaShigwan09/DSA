//Q19) Write the Recursive algorithm to calculate x^n where x & n are integer

#include<stdio.h>

int RPow(int x ,int n);

int RPow(int x,int n){
    if(n==0){
        return 1;
    }
    else{
        return (x*RPow(x,n-1));
    }
}


int main(){

    int b=0,p=0,res=0;

    printf("Enter The Base Number :");
    scanf("%d",&b);

    printf("Enter The Power Number :");
    scanf("%d",&p);

    res=RPow(b,p);

    printf("%d ^ %d = %d",b,p,res);

    return 0;

}