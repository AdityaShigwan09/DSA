#include<stdio.h>
#define max 100

int visited[max];
int stack[max];
int adj[max][max];
int n;
int top=-1;
void create_graph();
void topological_sort();
void dfs(int v);

int main(){
create_graph();
topological_sort();
return 0;
}

void create_graph(){
int origin,dest,edge;

printf("Enter The Number of Vertices :");
scanf("%d",&n);

printf("Enter the edge ");
scanf("%d",&edge);

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
adj[i][j]=0;
}
}

for(int i=0;i<edge;i++){
printf("Enter (Origin , Destination) :");
scanf("%d %d",&origin,&dest);

if(origin>=n|| dest>=n|| origin<0||dest<0){
printf("Invalid");
i--;
}
else{
adj[origin][dest]=1;
}
}
}

void topological_sort(){
for(int i=0;i<n;i++){
visited[i]=0;
}

for(int i=0;i<n;i++){
if(visited[i]==0){
dfs(i);
}
}
printf("Topological Sort :");
while(top!=-1){
printf("%d ",stack[top--]);
}
}

void dfs(int v){
visited[v]=1;

for(int i=0;i<n;i++){
if(adj[v][i]==1 &&visited[i]==0){
dfs(i);
}
}
stack[++top]=v;
}