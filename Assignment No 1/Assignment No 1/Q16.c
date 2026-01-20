//Q16) Write algorithm for following  Given n apositive iteger Determine whether n is sum of all of its divisor  
//     i.e n is sum of all t where 1<=t<=n & t divides n

#include<stdio.h>
int main(){
    int n,sum=0;

    printf("Enter the Positive Number :");
    scanf("%d",&n);

    for(int t=1 ; t<n;t++){
        if(n % t==0){
            sum+=t;
        }
    }

    if(sum==n){
        printf("%d is equal to sum of its divisors ",n);
    }
    else{
        printf("%d not is equal to sum of its divisors ",n);
    }
    return 0;
}