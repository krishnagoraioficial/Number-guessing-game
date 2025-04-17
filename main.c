#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main()
{
    // Variables
    char Play;
    int guess;
    int random;
    int count;

    srand(time(0));

    // <<<<<<<<<<<<<<<<Start the game>>>>>>>>>>>>>
    printf("\t====== Welcome to Number gussing game ======\n\n");

    
do{
    random = (rand() % 100) + 1;
    count = 1;

    printf("Enter a number between 1 to 100: ");

    while (1) {
        if (scanf("%d", &guess) != 1) {
            // Check invalid input (non-integer)
            printf("Invalid input! Please enter a number: ");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (guess < random) {
            printf("Try a bigger number: ");
            count++;
        } else if (guess > random) {
            printf("Try a smaller number: ");
            count++;
        } else {
            printf("\n\t+++ Congrats you got the number in %d tries +++\n", count);
            break;  
            //<<<<<<<<<<<<<End the game>>>>>>>>>>>>>>
        }
    }

    // Reapet the game //
    printf("Do you want to play more [y/n]? ");
    while (getchar() != '\n');  // Clear input buffer 
    scanf("%c", &Play);
    Play = toupper(Play);

} while (Play == 'Y');

    printf("\nThanks for Playing\n@ Developed by Krishna Gorai\n");
    return 0;
}