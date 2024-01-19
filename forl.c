#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;
    int guess = 16;
    int guessCount;
    int guessLimit = 3;
    int outOfGuess = 0;

    for (guessCount = 0; guessCount < guessLimit && input != guess && outOfGuess == 0; guessCount++) {
        printf("Guess the number: ");
        scanf("%d", &input); 

        if (input == guess) {
            printf("Congratulations! You guessed the correct number.\n");
            break;
        } else {
            printf("Wrong guess. Try again.\n");
        }

        if (guessCount == guessLimit - 1) {
            outOfGuess = 1;
            printf("Sorry, you are out of guesses. The correct number was %d.\n", guess);
        }
    }

    return 0;
}
