#include <stdlib.h>

int main () {
    int secret = 34;
    int input;
    int guessLimit = 3;
    int guessCount = 0;
    int outOfGuesess = 0;

    printf("Gamble2.0\n");

    while (input != secret && outOfGuesess == 0) { 
        if ( guessCount < guessLimit) {
               printf("Guess the secret value ");
                 scanf("%d", &input);
                 guessCount++;
        } else {
            outOfGuesess = 1;
        }
     
    }

    if (outOfGuesess == 1) {
        printf("Knocked out!");
    }else {
    printf("You Win!");
    }

    

    return 0;
}