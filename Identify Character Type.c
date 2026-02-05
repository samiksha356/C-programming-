#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch;
    scanf("%c", &ch);
    if((ch>= 'A' && ch<= 'Z')||(ch>='a' && ch<= 'z')){
        printf("Alphabet");
    }
    else if(ch>= 48 && ch<=57){
        printf("Digit");
    }
    else {
        printf("Symbol");
    }
    return 0;
}
