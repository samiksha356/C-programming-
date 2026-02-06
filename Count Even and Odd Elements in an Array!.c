#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int n, i;
    scanf("%d", &n);  
    int arr[n];
    int evenCount = 0, oddCount = 0;

    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    
    printf("%d %d\n", evenCount, oddCount);

    return 0;
}   
   
