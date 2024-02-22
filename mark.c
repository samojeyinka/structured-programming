#include <stdio.h>

// NAME: Ojeyinka Emmanuel
// MATRIC N0: 2022/40970
// DEPT: Computer Science

int main() {
    int marks;

    //To instruct user for prompt
    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    char grade;

    if (marks < 40) {
        grade = 'F';
    } else if (marks < 45) {
        grade = 'E';
    } else if (marks < 49) {
        grade = 'D';
    } else if (marks < 60) {
        grade = 'C';
    } else if (marks < 70) {
        grade = 'B';
    } else if (marks <= 100) {  
        grade = 'A';
    } else {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
        return 1;
    }
    printf("Grade: %c\n", grade);
    return 0;
}
