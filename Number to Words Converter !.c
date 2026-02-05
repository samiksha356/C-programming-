#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;
    scanf("%d", &num);
    
    int digits[10], count = 0;
    if(num==0) {
        printf("Zero");
        return 0;
    }
    while(num>0) {
        digits[count] = num % 10;
        num /= 10;
        count++;
    }
    for (int i = count - 1; i>=0; i--) {
        switch (digits[i]) {
            case 0: printf("Zero"); break;
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
        if (i !=0)
            printf(" ");
    }
    return 0;
}
