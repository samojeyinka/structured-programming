#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("How many courses? ");
    scanf("%d", &num);

    float point[num], unit[num];

    for(int i = 0; i < num; i++){
        printf("Enter course point: ");
        scanf("%f", &point[i]);
        printf("Enter course unit: ");
        scanf("%f", &unit[i]);
    }

    float sum = 0;
    float totalCredit = 0;

    for(int j = 0; j < num; j++){
        sum += point[j] * unit[j];
        totalCredit += unit[j];
    }

    float gpa;
    gpa = sum / totalCredit;

    printf("Your GPA is %f\n", gpa);
    return 0;
}
