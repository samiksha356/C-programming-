#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char x;
    scanf("%c", &x);
    if((x>= 'A' && x<='Z') || (x>= 'a' && x<='z')){
        
        
        if(islower(x)){
            x = x-32;
        }
        if(x== 'A'|| x=='E'|| x=='I'|| x=='O'|| x=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}
