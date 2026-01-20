//Q14) Write Algorithm for finding  the mmaximum number from the given list


#include<stdio.h>

int main(){
    int a[]={30,20,10,40,50};
    int size=sizeof(a)/sizeof(a[0]);
    int temp=0;
    temp=a[0];
    for (int i=1;i<size;i++){
        if(temp<a[i]){
            temp=a[i];
        }
    }
    printf("Maximum Number is %d",temp);

    return 0;
}