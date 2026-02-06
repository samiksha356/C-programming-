#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
    
    
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int arr[101];        
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }

    int seen[101];        
    int freq[101];        
    int uniq = 0;

    for (int i = 0; i < N; ++i) {
        int val = arr[i];
        int found = -1;
        for (int j = 0; j < uniq; ++j) {
            if (seen[j] == val) { found = j; break; }
        }
        if (found == -1) {
            seen[uniq] = val;
            freq[uniq] = 1;
            uniq++;
        } else {
            freq[found]++;
        }
    }

    for (int i = 0; i < uniq; ++i) {
        printf("%d: %d\n", seen[i], freq[i]);
    }

    return 0;
}
   
