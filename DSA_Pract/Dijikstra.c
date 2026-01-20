#include<stdio.h>
#include<limits.h>
#define V 10

void dijikstra(int graph[V],int src,int n);
int mindist(int dist[V],int visited[V],int n);


int main(){
int n,int src;
int graph[V]{V];

printf("Enter the No of Vertices :");
scanf("%d",&n);

printf("Enter the Adjacant Matrix :\n");
for(int i=0;i<n;I++){
for(int j=0;j<n;j++){
scanf("%d",graph[i][j]);

if(graph[i][j]==0 && i!=j){
graph[i][j]=INT_MAX;
}
}
}

prinf("Enter the Starting Vertex : ");
scanf("%d",&src);

dijikstra(graph,src,n);

return 0;

}


void dijikstra(int graph[V],int src,int n){
int visited[V];
int dist[V];

for(int i=0i<n;i++){
visited[i]=0;
dist[i]=INT_MAX;
}

dist[src]=0;

for(int count=0;count<n;count++){
int u=mindist(dist,visited,n);

visted[u]=1;

for(int v=0;v<n;v++){
if(!visited[v] && graph[u][v]!=INT_MAX && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v]){
	dist[v]=dist[u]+graph[u][v];
}
}
}

printf("Shortest Path From %d \n:");
for(int i=0;i<n;i++){
printf("Vertex %d -> Distance : ",i);
if(!dist[i]==INT_MAX){
printf("INF\n");
}
else{
printf("%d\n",dist[i]);
}
}
}


int mindist(int dist[V],int visited[V],int n){
int min=INT_MAX;
int min_index=-1;


for(int i=0;i<n;i++){
if(!visited[i] && dist[i]<min){
min=dist[i];
min_index=i;
}
}
return min_index;
}