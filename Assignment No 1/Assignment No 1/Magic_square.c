#include <stdio.h>
#include <stdlib.h>

void generateMagicSquare(int n) {
    int magicSquare[3][3]; // fixed size 3x3

    // Initialize matrix
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            magicSquare[i][j] = 0;
        }
    }
        

    int i = 0;
    int j = 3 / 2;

    for (int num = 1; num <= 9; ) {
        if (i < 0 && j == 3) {
            i += 2;
            j--;
        }
        else {
            if (i < 0)
                i = 2;
            if (j == 3)
                j = 0;
        }

        if (magicSquare[i][j] != 0) {
            i += 2;
            j--;
            continue;
        }
        else {
            magicSquare[i][j] = num++;
        }

        i--;
        j++;
    }

    printf("\nMagic Square of size 3x3:\n\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++)
            printf("%4d ", magicSquare[x][y]);
        printf("\n");
    }
}

int main() {
    int n=3;

    generateMagicSquare(n);

    return 0;
}
