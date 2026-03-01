#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int A[R][C], B[R][C], sum[R][C];

    // Read first matrix
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read second matrix
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Calculate sum matrix
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print sum matrix
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    
    
