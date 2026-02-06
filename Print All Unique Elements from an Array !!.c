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

    int freq[101] = {0}; 
    int printed = 0;

    
    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        freq[i] = count;
    }

   
    for (int i = 0; i < N; i++) {
        if (freq[i] == 1) {
            printf("%d ", arr[i]);
            printed = 1;
        }
    }

   
    if (!printed) {
        printf("No unique elements");
    }

    return 0;
}
   
