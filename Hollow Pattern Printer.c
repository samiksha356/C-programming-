#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, m, i, j;
    scanf("%d %d", &n, &m);
    for(j=1; j<=n; j++){
        for(i=1; i<=m; i++){
            if(j==1 || j==n){
                printf("* ");
            }
            else{
                
                if(i==1 || i==m){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    
    
    
    return 0;
}
        
            
        
    

    
