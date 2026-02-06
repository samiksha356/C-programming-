#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n, i, smallest, largest;

    
    scanf("%d", &n);

    int arr[n];

    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    smallest = largest = arr[0];

    
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }


    printf("%d %d\n", smallest, largest);

    return 0;
}    
    
