#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int a[100 + 5];               
    for (int i = 0; i < N; ++i) {
        scanf("%d", &a[i]);
    }

    int pos;
    if (scanf("%d", &pos) != 1) return 0;

    if (pos < 1 || pos > N) {
        printf("Invalid position\n");
        return 0;
    }

    
    int first = 1;
    for (int i = 0; i < N; ++i) {
        if (i == pos - 1) continue;
        if (!first) printf(" ");
        printf("%d", a[i]);
        first = 0;
    }
    printf("\n");
    return 0;
}
   
   
