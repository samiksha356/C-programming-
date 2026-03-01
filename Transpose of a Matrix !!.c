#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int A[R][C];

    // Read the matrix
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Print transpose matrix (C x R)
    for (int j = 0; j < C; j++) {
        for (int i = 0; i < R; i++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
