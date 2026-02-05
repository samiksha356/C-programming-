#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float radius, side, length, width, area, perimeter;
    const float pi = 3.1416;
    scanf("%f", &radius);
    scanf("%f", &side);
    scanf("%f%f", &length, &width);
    area = pi*radius*radius;
    perimeter = 2*pi*radius;
    printf("Circle: %.2f %.2f\n",area, perimeter);
    area = side*side;
    perimeter = 4*side;
    printf("Square: %.2f %.2f\n",area, perimeter);
    area = length*width;
    perimeter = 2*(length+width);
    printf("Rectangle: %.2f %.2f\n", area, perimeter);
    
    return 0;
}
