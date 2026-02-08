#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int N;
    scanf("%d", &N);

    int A[N], B[N];

    // Read Array A
    for (int i = 0; i < N; i++) {
        scanf("%d", (A + i));
    }

    // Read Array B
    for (int i = 0; i < N; i++) {
        scanf("%d", (B + i));
    }

    int *pA = A;
    int *pB = B;
    int temp;

    // Swap elements using pointers
    for (int i = 0; i < N; i++) {
        temp = *(pA + i);
        *(pA + i) = *(pB + i);
        *(pB + i) = temp;
    }

    // Print Array A after swapping
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pA + i));
    }
    printf("\n");

    // Print Array B after swapping
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pB + i));
    }

    return 0;
}
   
