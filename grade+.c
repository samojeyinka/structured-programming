/* Write a program to compute grade of students using if else adder. The grades are assigned as followed*/
/*marks<40 F 40 <= 45 E 45 <= 49 D 49 <= 59 C 60 <= 69 B 70 <= 100 A */
#include <stdio.h>

char compute_grade(int mark) {
    if (mark < 0 || mark > 100) {
        return 'I'; // 'I' for "Invalid"
    } else if (mark < 40) {
        return 'F';
    } else if (mark <= 45) {
        return 'E';
    } else if (mark <= 49) {
        return 'D';
    } else if (mark <= 59) {
        return 'C';
    } else if (mark <= 69) {
        return 'B';
    } else {
        return 'A';
    }
}

int main() {
    int mark;
    printf("Enter the student's mark: ");
    scanf("%d", &mark);

    char grade = compute_grade(mark);

    if (grade == 'I') {
        printf("Invalid score\n");
    } else {
        printf("The grade is: %c\n", grade);
    }

    return 0;
}
