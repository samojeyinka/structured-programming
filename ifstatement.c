#include <stdio.h>
#include <stdlib.h>

// /*The first try */
// int max(int num1, int num2){
//     int result;
//     if(num1 > num2){
//         result = num1;
//     } else {
//     result = num2;
//     }

//     return result;
// }

// int main(){
//     printf("The maximum %d", max(3,0));
//     return 0;
// }


/*The second try with 3 arguments */

int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int main(){
    printf("The maximum %d", max(7,12,30));
    return 0;
}