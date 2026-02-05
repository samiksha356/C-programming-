#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, years, weeks;
    scanf("%d", &n);
    years = n/365;
    n = n%365;
    weeks = n/7;
    n = n%7;
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", n);
    return 0;
}
