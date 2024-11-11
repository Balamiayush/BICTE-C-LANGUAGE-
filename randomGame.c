#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0)); // seeding the random number generator with current time
    int random = (rand() % 100) + 1;
    int guess;
    int numberofGuess=0;
    do
    {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);

        if (guess < random)
        {

            printf("Too low! Try again: ");
        }

        else if (guess > random)
        {

            printf("Too high! Try again: ");
        }
        numberofGuess++;


    } while (
        guess != random);
        
    printf("Congratulations! You guessed the correct number in %d attempts.\n", numberofGuess);
    return 0;
}