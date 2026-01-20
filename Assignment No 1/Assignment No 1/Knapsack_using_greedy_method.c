#include <stdio.h>

void greedy_knapsack_simple(int n, float p[], float w[], float m, float x[]) {
    
    for (int i = 0; i < n; i++) x[i] = 0.0;
    
    float U = m;
    
  
    for (int i = 0; i < n; i++) {
        if (w[i] > U) break;
        x[i] = 1.0;
        U = U - w[i];
    }
    
  
    if (U > 0) {
        for (int i = 0; i < n; i++) {
            if (x[i] == 0.0) {
                x[i] = U / w[i];
                break;
            }
        }
    }
}

int main() {

    float profits[] = {24.0, 25.0, 15.0};  
    float weights[] = {15.0, 18.0, 10.0};  
    float capacity = 20.0;
    int n = 3;
    float x[n];
    
    greedy_knapsack_simple(n, profits, weights, capacity, x);
    
 
    float total_cost = 0.0;
    printf("Solution:\n");
    for (int i = 0; i < n; i++) {
        printf("Take %.2f of item %d (profit=%.1f, weight=%.1f)\n", 
        x[i], i+1, profits[i], weights[i]);
        total_cost += x[i] * profits[i];
    }
    
    printf("\nTotal cost (profit): %.2f\n", total_cost);
    
    return 0;
}