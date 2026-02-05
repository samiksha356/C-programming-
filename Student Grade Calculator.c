#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int phy, chem, bio , math ,com;
    int total;
    float percentage;
    scanf("%d %d %d %d %d" , &phy, &chem, &bio, &math, &com);
    total = phy+ chem+ bio+ math+ com;
    percentage = (total*100.0/500);
    printf ("Percentage = %.2f\n" , percentage );
    if (percentage >= 90 ){
        printf("Grade = A\n");
    }
    else if ( percentage >= 80 && percentage < 90 ) {
        printf("Grade = B\n");
    }
    else if ( percentage >= 70 && percentage < 80) {
        printf("Grade = C\n");
    }
    else if ( percentage >= 60 && percentage < 70) {
        printf("Grade = D\n");
    }
    else if ( percentage >= 40 && percentage < 60) {
        printf("Grade = E\n");
    }
    else if(percentage<40){
        printf("Grade = F\n");
    }
    return 0;
}
