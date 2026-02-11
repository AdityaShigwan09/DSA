#include<stdio.h>

int MAXSIZE=8;
int stack[8];
int top=-1;

int isFull(){
    if(top==MAXSIZE){
        return 1
    }
    else{
        return 0;
    }
}

int push(int n){
    if(!isFull){
        top++;
        stack[top]=n;
    }
    else{
        printf("Stack is Full!!!");
    }
}

int main(){
    push(10);
    push(21);
    push(09);

    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}