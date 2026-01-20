#include<stdio.h>
#define max 30

typedef struct{
int u,v,w;
}Edge;

void kruskal(int n,int cost[max][max]);
int find(int parent[],int i);
void union_set(int parent[],int i,int j);

int main(){
    int cost[max][max] = {
        {0,12,5,8,9},
        {12,0,10,0,0},
        {5,10,0,7,0},
        {8,0,7,0,10},
        {9,0,0,10,0}
    };

int n=sizeof(cost)/sizeof(cost[0]);

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(cost[i][j]==0){
cost[i][j]=999;
}
}
}

kruskal(n,cost);
return 0;
}

void kruskal(int n,int cost[max][max]){
	Edge edge[max];
	int parent[max];
	int total_cost=0;
	int count=0;
	int k=0;

	for(int i=0;i<n;i++){
		parent[i]=i;
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(cost[i][j]!=999){
				edge[k].u=i;
				edge[k].v=j;
				edge[k].w=cost[i][j];
				k++;
			}
		}
	}

	for(int i=0;i<k;i++){
		for(int j=0;j<k-i-1;j++){
			if(edge[j].w> edge[j+1].w){
				Edge temp=edge[j];
				edge[j]=edge[j+1];
				edge[j+1]=temp;
			}
		}
	}


for(int i=0;i<k&&count<n-1;i++){
int u=edge[i].u;
int v=edge[i].v;
int w=edge[i].w;

int root_u=find(parent,u);
int root_v=find(parent,v);

if(root_u!=root_v){
union_set(parent,root_u,root_v);
printf("%d -> %d  %d\n",u,v,w);
total_cost+=w;
count++;
}
}
printf("Totol %d",total_cost);
}

int find(int parent[],int i){
while(parent[i] != i){
i=parent[i];
}
return i;
}

void union_set(int parent[],int i,int j){

parent[j]=i;

}