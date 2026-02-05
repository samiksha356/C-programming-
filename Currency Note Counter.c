#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, count;
    scanf("%d", &n);
    count = n/500;
    n = n % 500;
    if (count !=0)
        printf("500: %d\n", count);
    n = n % 500;
    count = n/100;
    if(count !=0)
        printf("100: %d\n", count);
    n = n % 100;
    count = n/50;
    if(count !=0)
        printf("50: %d\n", count);
    n = n % 50;
    count = n/20;
    if(count !=0)
        printf("20: %d\n", count);
    n = n % 20;
    count = n/10;
    if(count !=0)
        printf("10: %d\n", count);
    n = n % 10;
    count = n/5;
    if(count !=0)
        printf("5: %d\n", count);
    n = n % 5;
    count = n/2;
    if(count !=0)
        printf("2: %d\n", count);
    n = n % 2;
    count = n/1;
    if(count != 0)
        printf("1: %d\n", n);


    return 0;
}
