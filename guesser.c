#include <stdio.h>
#include <stdlib.h>

int main(){

    int secretNum = 5;
    int guess;
    int guessLimit = 3;
    int guesCount = 0;
    int outOfGuesses = 0;

    while(guess != secretNum && outOfGuesses == 0){
        if (guesCount < guessLimit){
        printf("Guess the secret number");
        scanf("%d", &guess);

        guesCount++;

        } else {
            outOfGuesses = 1;
        }
    }
        if (outOfGuesses == 1) {
             printf("You lost!");
        } else{
            printf("You Win!");
        }
    return 0;
}