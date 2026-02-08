#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

struct Student {
    char name[51];
    int age;
    char grade;
};

int main() {
    struct Student s;

    // Read input
    fgets(s.name, sizeof(s.name), stdin);
    scanf("%d", &s.age);
    scanf(" %c", &s.grade);

    // Remove newline character from name if present
    for (int i = 0; s.name[i] != '\0'; i++) {
        if (s.name[i] == '\n') {
            s.name[i] = '\0';
            break;
        }
    }

    // Print output in required format
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Grade: %c\n", s.grade);

    return 0;
}
