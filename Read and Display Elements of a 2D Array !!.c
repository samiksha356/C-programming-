#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int R,C;
    
    scanf("%d %d", &R, &C);
    int arr[R][C];
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
