#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Marks{
    int math;
    int science; 
    int eng;
    int comp;
};



struct student{
    int roll;
    char name[50];
    struct Marks m;
    int total;
};




int main() {
    int N;
    scanf("%d", &N);
    
    struct student s[N];
int i, topperIndex=0;

for(i=0; i<N; i++){
    
    scanf("%d ", &s[i].roll);
    gets(s[i].name);
    scanf("%d", &s[i].m.math);
    scanf("%d", &s[i].m.science);
    scanf("%d", &s[i].m.eng);
    scanf("%d", &s[i].m.comp);
    
    s[i].total=s[i].m.math+s[i].m.science+s[i].m.eng+s[i].m.comp;
    
    if(i==0 || s[i].total>=s[topperIndex].total){
        topperIndex=i;
    }
}
    printf("Topper Details:\n");
    printf("Roll No: %d\n", s[topperIndex].roll);
    printf("Name: %s\n", s[topperIndex].name);

    printf("Total Marks: %d", s[topperIndex].total);
    
    return 0;
}
