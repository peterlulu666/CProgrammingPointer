#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int numberOfGuess = 5;
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 20;

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n\n");

    int currentNumberOfGuess = 0;
    int userInput;
    while (true) {
        if (currentNumberOfGuess == numberOfGuess) {
            printf("My number is %d\n", randomNumber);
            break;

        }

        // singular and plural
        printf("you tried %d time%s and you have %d tr%s left\n", currentNumberOfGuess,
               currentNumberOfGuess == 1 ? "" : "s",
               numberOfGuess - currentNumberOfGuess,
               numberOfGuess - currentNumberOfGuess == 1 ? "y" : "ies");
        printf("Enter a guess: \n");
        scanf("%d", &userInput);

        if (userInput < randomNumber) {
            printf("Sorry, %d is wrong. My number is greater than that.\n\n", userInput);

        } else if (userInput > randomNumber) {
            printf("Sorry, %d is wrong. My number is less than that.\n\n", userInput);

        } else {
            printf("Congratulations. You guessed it!\n");
            break;

        }
        currentNumberOfGuess++;

    }

    return 0;
}