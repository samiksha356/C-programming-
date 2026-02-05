#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float celsius, fahrenheit;
    scanf("%f %f", &celsius, &fahrenheit);
    fahrenheit = (9*celsius/5)+32;
    printf("%.2f", fahrenheit);
    return 0;
}
