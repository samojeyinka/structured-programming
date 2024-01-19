#include <stdio.h>
#include <stdlib.h>

/* Function 1*/

// int main()
// {
//     sayHi();
//     return 0;
// }

// void sayHi()
// {
//     printf("Hello guys!");
// }

/* Function 2 */

// int main()
// {
//     sayHi("Sam");
//     sayHi("Tom");
//     sayHi("Col");
//     return 0;
// }

// void sayHi(char name[])
// {
//     printf("Hello %s\n", name);
// }

/* Function 3 - with more than 1 params */

int main()
{
    sayHi("Sam",12);
    sayHi("Tom",15);
    sayHi("Col",54);
    return 0;
}

void sayHi(char name[], int age[])
{
    printf("Hello %s, you are %d\n", name, age);
}