#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int n, value, position;

    
    scanf("%d", &n);

    int arr[101]; 

   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    scanf("%d", &value);
    scanf("%d", &position);

  
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[position - 1] = value;

   
    n++;


    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

   
