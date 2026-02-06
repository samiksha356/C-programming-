#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int N;
    scanf("%d", &N);  

    int arr[N];

    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = N - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(" "); 
        }
    }

    return 0;
}    
    
