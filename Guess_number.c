#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int Gnum = rand() % 100 + 1;
    int guess;
    printf("OHH!! If you think you are a Guessing Master -->\n");
    printf("I have selected a random number between 1 and 100.\n");

    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < Gnum) {
            printf("Alas!! your guess is Smaller...Try again.\n");
        } else if (guess > Gnum) {
            printf("Ohh!! your guess is Bigger Try again.\n");
        } else {
            printf("Congratulations ! You guessed the number %d in attempts.\n",Gnum);
        }
    } 

    return 0;
}