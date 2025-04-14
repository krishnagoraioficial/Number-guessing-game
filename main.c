#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main()
{
    // Variables
    char Play = 'Y';
    int guess;
    int random;
    int count = 1;
    // Generating a random numbers using rand function
    srand(time(0));
    random = (rand() % 100) + 1;

    // ####### Welcome Window ######## //

    printf("\t====== Welcome to Number gussing game ======\n\n");

    
do{
    here: // Lebel for goto function
    printf("Enter a number between 1 to 100: ");
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
        printf("\n\t+++ Congrats you got the number in %d try +++\n", count);
        printf("Do you want to play more[y/n]? ");
        scanf("%c", &Play);
        while (getchar() != '\n');  // Protect buffer overflow
        Play = toupper(Play);
    }
}while(Play == 'Y');

    printf("\nThanks for Playing\n@ Developed by Krishna Gorai\n");
    return 0;
}