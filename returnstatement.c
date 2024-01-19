#include <stdio.h>
#include <stdlib.h>


// /*Return statement fn should be above the main function*/
// double cube(double num){
//     // double result = num * num * num;
//     // return result;
//     return num * num * num;
// }

// int main(){
//     printf("The answer is: %f", cube(3));
//     return 0;
// }




/*To put the return statement at the bottom, you must pput the prototype at the bottom */

double cube(double num);

int main(){
    printf("The answer is: %f", cube(3));
    return 0;
}

double cube(double num){
    // double result = num * num * num;
    // return result;
    return num * num * num;
}