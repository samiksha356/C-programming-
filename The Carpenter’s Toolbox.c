#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




struct Rectangle {
    int length;
    int width;
};

int getArea(struct Rectangle r) {
    return r.length * r.width;
}

int getPerimeter(struct Rectangle r) {
    return 2 * (r.length + r.width);
}

int main() {
    struct Rectangle rect;

  
    scanf("%d", &rect.length);
    scanf("%d", &rect.width);

    
    printf("Area: %d\n", getArea(rect));
    printf("Perimeter: %d\n", getPerimeter(rect));

    return 0;
}
