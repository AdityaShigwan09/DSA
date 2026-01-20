#include<stdio.h>
#define max 30

void sort(int p[],int w[],float r[],int n);
int main(){
int n,capacity;
int p[max],w[max];
float r[max] , f[max];

printf("Enter The No of Item :");
scanf("%d",&n);

printf("Enter the Profit(%d)",n);
for(int i=0;i<n;i++){
scanf("%d",&p[i]);
}

printf("Enter the Weight(%d)",n);
for(int i=0;i<n;i++){
scanf("%d",&w[i]);
}

printf("Enter KnapSack Capacity :");
scanf("%d",&capacity);

for(int i=0;i<n;i++){
r[i]=p[i]/w[i];
f[i]=0.0;
}

sort(p,w,r,n);

int remain=capacity;
float total=0.0;

for(int i=0;i<n;i++){
if(w[i]<=remain){
f[i]=1.0;
remain-=w[i];
total+=p[i];

printf("Item %d -> FULL Profit : %d Weight: %d Ratio :%.2f\n",i+1,p[i],w[i],r[i]);

}
else{
f[i]=(float)remain/w[i];
total+=p[i]*f[i];

printf("Item %d ->%.2f Profit : %.2f Weighr: %d\n",i+1,f[i],p[i]*f[i],remain);
break;
}
}

printf("Total Cost : %.2f\n",total);
return 0;
}

void sort(int p[],int w[],float r[],int n){
for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
if(r[j]<r[j+1]){
float temp_r=r[j];
r[j]=r[j+1];
r[j+1]=temp_r;

int temp_p=p[j];
p[j]=p[j+1];
p[j+1]=temp_p;

int temp_w=w[j];
w[j]=w[j+1];
w[j+1]=temp_w;
}
}
}
}