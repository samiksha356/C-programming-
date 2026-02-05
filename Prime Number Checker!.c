#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, isPrime = 1;
    scanf("%d", &n);
    if (n <=1){
        printf("Not Prime");
        return 0;
    }
    for(i = 2; i * i <=n; i++){
        if(n % i ==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
