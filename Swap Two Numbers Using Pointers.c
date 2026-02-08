#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, y;
    int *ptr1 = &x, *ptr2 = &y;
    scanf("%d %d", ptr1, ptr2);
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    printf("%d %d", *ptr1, *ptr2);
       
    return 0;
}
