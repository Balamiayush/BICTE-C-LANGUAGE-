#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int num;
    srand(time(0));  // Seed the random number generator with the current time
    num = rand() % 100 + 1;  // Generate a random number between 1 and 100
    
    int guess = 0;
    int attempts = 0;

    do {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);
        
        if (guess > num) {
            printf("Too high! Try again.\n");
        } else if (guess < num) {
            printf("Too low! Try again.\n");
        }
        
        attempts++;
    } while (guess != num);

    printf("Congratulations! You guessed the correct number.\n");
    printf("The generated random number is: %d\n", num);
    printf("Number of attempts: %d\n", attempts);

    return 0;
}
