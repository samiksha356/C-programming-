#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, N, result;
    scanf("%d", &N);
    for(i=1; i<=10; i++){
        result = N*i;
        printf("%d x %d = %d\n", N, i, result);
    }
    return 0;
}
