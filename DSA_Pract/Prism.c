#include<stdio.h>
#include<limits.h>
#define V 5

void prims(int cost[V][V]);
int find_min_edge(int cost[V][V],int selected[V],int *x,int *y);
int main(){
    int cost[V][V] = {
        {0,12,5,8,9},
        {12,0,10,0,0},
        {5,10,0,7,0},
        {8,0,7,0,10},
        {9,0,0,10,0}
    };

prims(cost);
return 0;
}

void prims(int cost[V][V]){
int selected[V]={0};
int no_edge=0;
int total_cost=0;

selected[0]=1;

printf(" Edge  Weight\n");


while(no_edge<V-1){
int x,y;
int min=find_min_edge(cost,selected,&x,&y);

printf("%d - %d \t%d\n",x,y,cost[x][y]);

total_cost+=cost[x][y];
selected[y]=1;
no_edge++;
}

printf("Total Cost of MST is %d",total_cost);
}



int find_min_edge(int cost[V][V],int selected[V],int *x,int *y){
int min=INT_MAX;

for(int i=0;i<V;i++){
if(selected[i]){
for(int j=0;j<V;j++){
if(!selected[j]&&cost[i][j]){
if(cost[i][j]<min){
min=cost[i][j];
*x=i;
*y=j;
}
}
}
}
}
return min;
}