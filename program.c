#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ // number guess game
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int random_number = rand() % 101;
    //    printf("Random number between 0 and 100 was: %d\n", random_number);
    int guess, attempt = 0;
    printf("Enter your guess");
    scanf(" %d", &guess);
    for (int i = 0; i <= 10; i++)
    {
    if (guess == random_number)
    {
        printf("You won\n");
        printf("Random number between 0 and 100 was: %d\n", random_number);
        printf("No. of attempts :: %d", attempt);
        break;
    }
    else
    {
        if (guess < random_number)
        {
            printf("Guess is lower\n");
            attempt++;
            printf("Enter your guess ");
            scanf("%d", &guess);
        }
        else if (guess > random_number)
        {
            printf("Guess is greater\n ");
            attempt++;
            printf("Enter your guess ");
            scanf("%d", &guess);
        }
        else
        {
            printf("enter valid input CODE 001");
        }
    }
    if(i==10){
        printf("All attempts used");
        printf("Random number between 0 and 100 was: %d\n", random_number);
    }
    }
return 0;
}
