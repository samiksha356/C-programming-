#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n, count=0;
    scanf("%d", &n);
    if(n==0){
        count = 1;
    }
    else{
        if(n<0)
            n= -n;
        
    while(n!=0){
        n= n/10;
        count++;
    }
    }
    printf("%d", count);
    return 0;

   
}
