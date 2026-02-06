#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int n, key, i, found = 0;

   
    scanf("%d", &n);

    int arr[n];

    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d", &key);

    
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d\n", i + 1); 
            found = 1;
            break;
        }
    }

    
    if(!found) {
        printf("Element not found\n");
    }

    return 0;
} 
    
