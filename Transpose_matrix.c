//Transpose of Matrix
#include<stdio.h>
int main(){
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int n=sizeof(a)/sizeof(a[0]);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%d ",a[j][i]);
}
printf("\n");
}
return 0;
}