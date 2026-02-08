#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fibonacci(int n){
    static int a = 0, b = 1, c, i=0;
    if(i<n){
        if(i==0)
           printf("0 ");
    else if(i==1)
        printf("1 ");
    else{
        c = a+b;
        printf("%d ", c);
        a = b;
        b = c;
        
        }
        i++;
        fibonacci(n);
    }  
}
int main() {
    int n;
    scanf("%d", &n);
    fibonacci(n);
    

    
    return 0;
}
