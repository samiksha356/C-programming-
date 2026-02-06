#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    int N;
    scanf("%d", &N);

    int arr[101];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int result[101];   
    int count = 0;

    for (int i = 0; i < N; i++) {
        int duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            result[count++] = arr[i];
        }
    }

    if (count == 0) {
        printf("No elements left");
    } else {
        for (int i = 0; i < count; i++) {
            printf("%d ", result[i]);
        }
    }

    return 0;
}
   
