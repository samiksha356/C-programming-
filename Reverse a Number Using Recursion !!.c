#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int reverseHelper(int num, int rev) {
    if (num == 0)
        return rev;
    return reverseHelper(num / 10, rev * 10 + num % 10);
}

int reverseNumber(int num) {
    return reverseHelper(num, 0);
}

int main() {
    int num;
    scanf("%d", &num);

    printf("%d", reverseNumber(num));
    return 0;
}
