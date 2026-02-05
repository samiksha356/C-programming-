#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i;
    scanf("%d", &n);
    int a=0, b=1, next;
    for(i=0; i<n; i++){
        printf("%d ", a);
        next = a+b;
        a=b;
        b= next;
    }
    return 0;
}
