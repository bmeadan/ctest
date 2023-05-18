#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 srand(time(0));
 int secretNum = rand() % 10;
 int guess;
 int guesses = 0;
 int maxguess = 3;
 int outofGuesses = 0;

 while (guess != secretNum && outofGuesses == 0) {
        if (guesses+1 <= maxguess) {
            printf("Guess number %d\n", guesses+1);
            printf("You Have %d Guesses Left\n", maxguess - guesses);

            printf("%s", "ENTER YOUR GUESS: ");
            scanf("%d", &guess);
            guesses++;
        } else {
            outofGuesses = 1;
        }
    if (outofGuesses == 1) {
        printf("Out of guesses");
        printf("The number was %d" ,secretNum);

    } else if (guess == secretNum ) {
     printf("You Got It\n");
     printf("The number was %d" ,secretNum);
    }
 }
return 0;
}
