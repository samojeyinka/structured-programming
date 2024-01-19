#include <stdio.h>
#include <stdlib.h>


struct Student{
    int age;
    char name[100];
    char course[100];
    double gpa;
};

int main(){

    struct Student student1;
    student1.age = 55;
    student1.gpa = 3.9;
    strcpy(student1.name, "John Doe");
    strcpy(student1.course, "Anatomy");

    printf("%s", student1.course);

    
    return 0;
}