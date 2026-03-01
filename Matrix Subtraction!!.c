#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int R,C;
    scanf("%d %d", &R, &C);
    int A[R][C], B[R][C], sub[R][C];
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0;i<R; i++){
        for(int j=0; j<C; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(int i=0;i<R; i++){
        for(int j=0; j<C; j++){
            sub[i][j] = A[i][j]-B[i][j];
        }
    }
    for(int i=0;i<R; i++){
        for(int j=0; j<C; j++){
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
