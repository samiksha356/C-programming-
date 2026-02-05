#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float cm, m, km;
    scanf("%f", &cm);
    m = cm/100;
    km = cm/100000;
    printf("%.2f %.2f", m, km);
    return 0;
}
