#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int isArmstrong(int num) {
    int temp = num, sum = 0, digits = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    return sum == num;
}

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int isPerfect(int num) {
    if (num <= 1)
        return 0;

    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("Armstrong Number");
    else if (isPrime(n))
        printf("Prime Number");
    else if (isPerfect(n))
        printf("Perfect Number");
    else
        printf("None of these");

    return 0;
}
