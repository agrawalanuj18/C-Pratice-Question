#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess_num, times_guess = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 and 100

    while (number <= 100) // Keep running the loop until the number is guessed
    {
        printf("Enter the Guess number between 1 to 100\n");
        scanf("%d", &guess_num);
        if (guess_num == number)
        {
            printf("The Number Matched and Number of guessed is %d\n", times_guess);
            break;
        }
        times_guess++;
        if (number > guess_num)
        {
            printf("Higher Number Please\n");
        }
        else
        {
            printf("Lower number please\n");
        }
    }

    return 0;
}