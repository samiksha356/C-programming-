#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int eng, math, science, comp, history;
    int total;
    float average, percentage;
    scanf(" %d %d %d %d %d", &eng, &math, &science, &comp, &history);
    total= eng+math+science+comp+history;
    average=total/5;
    percentage=(total*100/500);
    printf("%d %.2f %.2f", total, average, percentage);
    return 0;
}
