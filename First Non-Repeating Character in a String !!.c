#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    fgets(str, sizeof(str), stdin);
    int index=-1;
    for(int i=0; i<strlen(str); i++){
        int count=0;
        for(int j=0; j<strlen(str); j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count == 1){
            index = i;
            break;
        }
    }
    if(index == -1)
        printf("-1");
    else
        printf("%c", str[index]);
    return 0;
}
