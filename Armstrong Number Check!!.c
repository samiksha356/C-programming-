#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, n, remainder, digits=0, sum=0;
    scanf("%d", &n);
    for(i= n; i!=0; i/= 10)
        digits++;
    for(i= n; i!=0; i/=10){
        remainder = i%10;
        sum += pow(remainder, digits);
    }
    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
