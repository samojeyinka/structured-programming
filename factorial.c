#include <stdio.h>

// NAME: Ojeyinka Emmanuel
// MATRIC N0: 2022/40970
// DEPT: Computer Science

int main()
{
    int num;
    char choice;

    do
    {
        printf("Enter a number to find the factorial: ");
        scanf("%d", &num);

        int result = 1;
        for (int i = num; i >= 1; i--)
        {
            result *= i;
        }

        printf("The factorial of %d is: %d\n", num, result);

        printf("Do you want to calculate another factorial? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
