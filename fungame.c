#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    const int MAX_ATTEMPTS = 5;
    
    
    srand(time(0));
    number = rand() % 100 + 1; 

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n", MAX_ATTEMPTS);

    
    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < 1 || guess > 100) {
            printf("Please guess a number between 1 and 100.\n");
            attempts--; 
            continue;
        }

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
            break; 
        }

        if (attempts == MAX_ATTEMPTS) {
            printf("Sorry, you've used all your attempts. The number was %d.\n", number);
        }
    }

    printf("Thank you for playing!\n");
    return 0;
}
