/* Write a program to compute grade of students using if else adder. The grades are assigned as followed*/
/*marks<40 F 40 <= 45 E 45 <= 49 D 49 <= 59 C 60 <= 69 B 70 <= 100 A */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;

    printf("Enter your score: ");
    scanf("%d", &grade);

    if (grade < 40)
    {
        printf("You got F");
    }
    else if (grade >= 40 && grade < 45)
    {
        printf("You got E");
    }
    else if (grade >= 45 && grade < 49)
    {
        printf("You got D");
    }
    else if (grade >= 49 && grade < 60)
    {
        printf("You got C");
    }
    else if (grade >= 60 && grade < 70)
    {
        printf("You got B");
    }
    else if (grade >= 60 && grade < 70)
    {
        printf("You got B");
    }
    else
    {
        printf("You got A");
    }

    return 0;
}