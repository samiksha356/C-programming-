#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s1[1000], s2[1000];
    int k=0;
    fgets(s1, sizeof(s1), stdin); // madam
    for(int i=0; i<strlen(s1); i++){
        int flag=0;
        for(int k=0; k<i; k++){
            if(s1[i]==s1[k]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            s2[k++]= s1[i];
        }
    }
    s2[k]='\0';
    printf(s2);
    return 0;
}
