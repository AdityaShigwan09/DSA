//Q23) Write program for matix multiplication

#include<stdio.h>

int main(){
    int m=2,n=2;
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7.8}};
    int c[2][2];
    int i,j;


    printf("Matrix 1 :\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2 :\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",b[i][j]);
        }
         printf("\n");
    }

    printf("Multiplication of 2 Matrix :\n");

    for(int i=0;i<m ;i++){
        for(int j=0;j<n;j++){
            c[i][j]=c[i][j]+(a[i][j]*b[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",c[i][j]);
        }
        printf("\n");

    }

    return 0;
}