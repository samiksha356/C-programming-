#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];
    int primarySum = 0, secondarySum = 0;

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);

            if (i == j) {
                primarySum += matrix[i][j];          
            }
            if (i + j == N - 1) {
                secondarySum += matrix[i][j];        
            }
        }
    }

    int totalSum = primarySum + secondarySum;

    
    if (N % 2 == 1) {
        totalSum -= matrix[N / 2][N / 2];
    }

   
    printf("Sum of Primary Diagonal: %d\n", primarySum);
    printf("Sum of Secondary Diagonal: %d\n", secondarySum);
    printf("Total Sum of Both Diagonals: %d\n", totalSum);

    return 0;
}

   
