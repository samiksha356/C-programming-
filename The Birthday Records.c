#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s;


    fgets(s.name, sizeof(s.name), stdin);
    scanf("%d", &s.dob.day);
    scanf("%d", &s.dob.month);
    scanf("%d", &s.dob.year);

    for (int i = 0; s.name[i] != '\0'; i++) {
        if (s.name[i] == '\n') {
            s.name[i] = '\0';
            break;
        }
    }

    printf("Name: %s\n", s.name);
    printf("Date of Birth: %d/%d/%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
