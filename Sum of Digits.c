#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num, digit, sum=0;
    scanf("%d", &num);
         while(num!=0){
             digit=num%10;
             num=num/10;
             sum+=digit;
         }
    printf("%d", sum);
    return 0;
}
