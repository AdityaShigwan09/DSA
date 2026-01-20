#include <stdio.h>

#define MAX 100

int Prim(int E[][MAX], int cost[][MAX], int n, int t[][2]) {
    int k, l;
    int mincost;
    int near[MAX];
    int i, j;
    
    k = 0; l = 1; 
    
    mincost = cost[k][l];
    t[0][0] = k; t[0][1] = l;
    
    for (i = 0; i < n; i++) {
        if (cost[i][l] < cost[i][k]) 
            near[i] = l;
        else 
            near[i] = k;
    }
    near[k] = near[l] = 0;
    
    for (i = 2; i <= n-1; i++) { 
      
        j = 0;
        while (near[j] == 0 && j < n) j++; 
        
        for (int m = j + 1; m < n; m++) {
            if (near[m] != 0 && cost[m][near[m]] < cost[j][near[j]]) {
                j = m;
            }
        }
        
        t[i-1][0] = j; 
        t[i-1][1] = near[j];
        mincost = mincost + cost[j][near[j]];
        near[j] = 0;
        
        for (int k = 0; k < n; k++) {
            if ((near[k] != 0) && (cost[k][near[k]] > cost[k][j])) {
                near[k] = j;
            }
        }
    }
    
    return mincost;
}

int main() {
    int cost[MAX][MAX], t[MAX][2];
    int n = 5; 
    int E[MAX][MAX];
    
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) 
                cost[i][j] = 0;
            else 
                cost[i][j] = 999; 
        }
    }
    
    cost[0][1] = cost[1][0] = 2;
    cost[0][2] = cost[2][0] = 3;
    cost[1][2] = cost[2][1] = 1;
    cost[1][3] = cost[3][1] = 4;
    cost[2][3] = cost[3][2] = 5;
    cost[3][4] = cost[4][3] = 6;
    
    int mincost = Prim(E, cost, n, t);
    
    printf("Minimum cost: %d\n", mincost);
    printf("Edges in MST:\n");
    for (int i = 0; i < n-1; i++) {
        printf("(%d, %d)\n", t[i][0], t[i][1]);
    }
    
    return 0;
}