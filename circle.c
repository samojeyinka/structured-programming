#include <stdio.h>


int main(){
    double pie = 3.14,r;
    
    printf("Program to calculate the area and circumference of a circle");
    scanf("%lf", &r);

    // Since area of circle = πr^2
    // Since Circumference of circle = 2πr
    double area = pie * (r * r );
    double circumference = 2 * pie * r;
    printf("Area of the circle = %f\n", area);
    printf("Circumference of the circle = %f\n", circumference);

    return 0;

}