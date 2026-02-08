#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int *ptr = arr;

    // Read elements using pointers
    for (int i = 0; i < N; i++) {
        scanf("%d", (ptr + i));
    }

    // Print elements using pointers
    for (int i = 0; i < N; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
