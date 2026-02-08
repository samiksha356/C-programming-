#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d ", &n);
    char names[n][40];
    for(int i=0; i<n; i++){
        gets(names[i]);

    }
    //sorting logic
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(strcmp(names[j], names[j+1]) > 0){
                char temp[40];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    //print sorted list
    for(int i=0; i<n; i++){
        printf("%s\n", names[i]);
    }
    return 0;
}
