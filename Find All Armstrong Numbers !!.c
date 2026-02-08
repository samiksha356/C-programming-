#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int isArmstrong(int num){
    int originalNum = num;
    int sum = 0, digit = 0, temp;

    temp = num;
    while(temp != 0){
        digit++;
        temp /= 10;
    }

    temp = num;
    while(temp != 0){
        sum += pow(temp % 10, digit);
        temp /= 10;
    }

    return sum == originalNum;
}

int main() {
    int start, end, found = 0;
    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++){
        if(isArmstrong(i)){
            printf("%d ", i);
            found = 1;
        }
    }

    if(!found)
        printf("No Armstrong numbers found");

    return 0;
}
