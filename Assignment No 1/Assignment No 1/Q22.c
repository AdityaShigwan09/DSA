//Q22) Write program for matix transpose
#include<stdio.h>


int main(){


    int a[2][2]={{1,2},{9,8}};
    int a_trans[2][2];
    int m=2,n=2;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a_trans[i][j]=a[j][i];
        }
    }

    printf("Orignal Matrix :\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",a_trans[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}