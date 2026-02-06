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

    int counted[101] = {0};  
    int duplicateCount = 0;

    for (int i = 0; i < N; i++) {
        if (counted[i]) continue; 

        int freq = 0;
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                freq++;
                counted[j] = 1; 
            }
        }
        if (freq > 0) {
            duplicateCount++;
        }
    }

    printf("%d", duplicateCount);
    return 0;
} 
  
