#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, num, factorial=1;
    scanf("%d", &num) ;
    for(i=1;i<=num;i++){
        factorial*=i;
    }
    printf("%d", factorial) ;
    return 0;
}
