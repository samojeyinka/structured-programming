#include <stdio.h>

// NAME: Ojeyinka Emmanuel
// MATRIC N0: 2022/40970
// DEPT: Computer Science

int main(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("%d is a leap year.\n", year);
    }
    else{
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}
