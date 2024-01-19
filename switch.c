// Lets build grade grader
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'A';
    switch (grade)
    {
    case 'A':
        printf("You did great!");
        break;

    case 'B':
        printf("You did very well!");
        break;

    case 'C':
        printf("You passed!");
        break;

    case 'D':
        printf("You did poorly!");
        break;

    case 'E':
        printf("You did very poorly!");
        break;

    case 'F':
        printf("You failed!");
        break;

    default:
        printf("Invalid grade");
        break;
    }
    return 0;
}