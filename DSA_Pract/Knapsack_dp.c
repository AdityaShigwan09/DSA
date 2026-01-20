#include<stdio.h>
#define max 30


int MAX(int a,int b){
if(a>b){
return a;
}
return b;
}

int knapsack(int profit[max],int weight[max],int capacity,int n){
int dp[max][max];

for(int i=0;i<=n;i++){
for(int w=0;w<=capacity;w++){
if(i==0||w==0){
dp[i][w]=0;
}
else if(weight[i-1]<=w){
dp[i][w]=MAX(profit[i-1]+dp[i-1][w-weight[i-1]],dp[i-1][w]);
}
else{
dp[i][w]=dp[i-1][w];
}
}
}
return dp[n][capacity];
}





int main(){
int n,capacity;
int profit[max],weight[max];

printf("Enter The No of Item :");
scanf("%d",&n);

printf("Enter the Profit(%d) :",n);
for(int i=0;i<n;i++){
scanf("%d",&profit[i]);
}

printf("Enter the Weight(%d) :",n);
for(int i=0;i<n;i++){
scanf("%d",&weight[i]);
}

printf("Enter Knapsack Capacity :");
scanf("%d",&capacity);

int maxprofit=knapsack(profit,weight,capacity,n);

printf("Total Maximum Profit : %d",maxprofit);
return 0;
}

