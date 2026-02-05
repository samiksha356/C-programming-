#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float basicSalary, HRA , DA , grossSalary;
      scanf("%f", &basicSalary);
      if (basicSalary <=10000) {
          HRA = 0.20 * basicSalary;
          DA = 0.30* basicSalary;
      }
    else if (basicSalary<=20000){
        HRA = 0.25 * basicSalary;
        DA = 0.40 * basicSalary;
    }
    else  {
        HRA = 0.30 * basicSalary;
        DA = 0.50 * basicSalary;
    }
    grossSalary = basicSalary + HRA + DA;
    printf("%.2f\n", grossSalary);
    return 0;
}
