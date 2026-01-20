#include <stdio.h>

void TowersOfHanoi(int n, char Src, char Aux, char Dst) {
    if (n >= 1) {
        TowersOfHanoi(n - 1, Src, Dst, Aux);
        printf("Move top disk from tower %c to top of tower %c\n", Src, Dst);
        TowersOfHanoi(n - 1, Aux, Src, Dst);
    }
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("\nSteps to solve Tower of Hanoi with %d disks:\n", n);
    TowersOfHanoi(n, 'A', 'B', 'C'); 

    return 0;
}
