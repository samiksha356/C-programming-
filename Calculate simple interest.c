#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int p;
    float r, T, SI;
    scanf("%d", &p);
    scanf("%f %f", &r, &T);
    SI= (p*r*T)/100;
    printf("%.2f", SI);
    return 0;
}
