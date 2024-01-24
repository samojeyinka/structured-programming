#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int index = 1;

    while (index < 5) {
        int result = 1; 

        printf("Enter a number to find the factorial: ");
        scanf("%d", &num);

        for (int i = num; i >= 1; i--) {
            result *= i;
        }

        printf("The factorial is: %d\n", result);
        index++;
    }

    return 0;
}
