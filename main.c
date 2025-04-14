#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Variables
    int guess;
    int random;
    int count = 1;
    // Generating a random numbers using rand function
    srand(time(0));
    random = (rand() % 100) + 1;

    // ####### Welcome Window ######## //

    printf("\t====== Welcome to Number gussing game ======\n\n");

    printf("Enter a number between 1 to 100: ");

here: // Label for goto function
    scanf("%d", &guess);
    if (guess < random)
    {
        printf("Try a big number: ");
        count++;
        goto here;
    }
    else if (guess > random)
    {
        printf("Try small number: ");
        count++;
        goto here;
    }
    else
    {
        printf("\n\t+++ Congrats you got the number in %d try +++\n\n", count);
        printf("Thanks for Playing\n@ Developed by Krishna Gorai\n");
    }

    return 0;
}