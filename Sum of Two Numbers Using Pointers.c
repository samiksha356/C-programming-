#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int *p1=(int*) malloc(sizeof(int));
    int *p2=(int*) malloc(sizeof(int));
    printf("");
    scanf("%d %d", p1, p2);
    int sum = *p1 + *p2;
    printf("%d", sum);
    return 0;
}
