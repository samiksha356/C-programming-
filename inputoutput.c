#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch = 'a';
    int x = 56;
    float y = 56.78;
    double z = 78.8976;
    scanf("%c %d %f %lf",&ch,&x,&y,&z);
    printf("%c %d %.2f %.6f",ch,x,y,z);
    return 0;
}
