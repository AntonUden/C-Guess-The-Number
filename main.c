#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int number;
    for(int i = 0; i < (rand() % 100); i++) {
        number = (rand() % 1000) + 1;
    }
    printf("Guess the number 1 - 1000\n\n");
    while(true) {
        int guess, nitems;
        fflush(stdin);
        printf("Guess a number: ");
        nitems = scanf("%d", &guess);
        if (nitems == EOF || nitems == 0) {
            printf("Input error\n");
        } else {
            if(guess > number) {
                printf("Its smaller.\n");
            } else if(guess < number) {
                printf("Its larger.\n");
            } else if(guess == number) {
                printf("You win. the number was %i.\n", number);
                break;
            }
        }
    }
    while(true) getchar();
    return 0;
}
