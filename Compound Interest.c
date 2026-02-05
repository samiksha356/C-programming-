#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int P, T;
    float R, CI;
    scanf("%d %f %d", &P, &R, &T);
    CI = P * (pow((1+(R/100)),T)-1);
    printf("%.2f", CI);
    return 0;
}
