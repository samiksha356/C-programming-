#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, num, max;
    scanf("%d %d", &n, &max);
    for(i=1; i<=n; i++){
        scanf("%d", &num);
        if(num> max){
            max = num;
        }
    }
    printf("%d", max);
    return 0;
}
