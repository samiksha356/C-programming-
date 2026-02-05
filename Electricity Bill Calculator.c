#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int units;
    float bill=0.0 , surcharge, total;
    scanf("%d", &units);
    if ( units<=50) {
        bill= units*0.50;
    }
    else if ( units<=100){
        bill= 50*0.50+(units-50)*0.75;
    } 
    else if (units<=250) {
        bill=50*0.50+100*0.75+(units-150)*1.20;
    }
    else {
        bill=50*0.50+100*0.75+100*1.20+(units-250)*1.50;
    }
    surcharge=bill*0.20;
    total=bill+surcharge;
    printf("%.2f\n",total);
    
    return 0;
}
