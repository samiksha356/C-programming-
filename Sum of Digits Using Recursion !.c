#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumOfDigits(int num){
    static int sum; 
    if(num==0)
        return 0;
    else{
        sum=sum+num%10;
        sumOfDigits(num/10);
        return sum;
        
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", sumOfDigits(num));
       
    return 0;
}
