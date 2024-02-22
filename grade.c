/* Write a program to compute grade of students using if else adder. The grades are assigned as followed*/
/*marks<40 F 40 <= 45 E 45 <= 49 D 49 <= 59 C 60 <= 69 B 70 <= 100 A */

#include <stdio.h>

int main()
{
    double mark;

    printf("Enter your score: ");
    scanf("%lf", &mark);

    if (mark < 0 || mark > 100)
    {
        printf("Invalid score");
    }
    else if (mark >= 0 && mark <= 39)
    {
        printf("You got F");
    }
    else if (mark >= 40 && mark < 45)
    {
        printf("You got E");
    }
    else if (mark >= 45 && mark < 49)
    {
        printf("You got D");
    }
    else if (mark >= 49 && mark < 60)
    {
        printf("You got C");
    }
    else if (mark >= 60 && mark < 70)
    {
        printf("You got B");
    }
    else
    {
        printf("You got A");
    }

    return 0;
}