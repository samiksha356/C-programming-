#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



struct Student {
    char name[51];
    int age;
    char grade;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Student s[N];

    for (int i = 0; i < N; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].age);
        scanf(" %c", &s[i].grade);
    }

  
    for (int i = 0; i < N; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Grade: %c\n", s[i].grade);
    }

    return 0;
}
