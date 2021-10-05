/* Area where we include a bunch of stuff */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

/* Main code */

int main()
{
    srand(time(NULL));
    int randomNumber = rand() % 10;
    
    /* Guessing game by 2 epic developers! */
    
    printf("Guessing Game by 2 epic programmers\n");
    
    printf("please pick a number 0 - 10. if you guess right you win\n");
    printf("guess wrong and face your fate ...\n");
    printf("P.S. Do NOT enter a letter or bad things will happen...\n");
    
    int guess;
    scanf("%d", &guess);
    
    printf("you guessed %d\n", guess);
    printf("the correct answer was %d\n", randomNumber);
    
    if(guess == randomNumber)
    {
        
        printf("you win!\n");
    } else
    {
        
        printf("you lost!\n");
    }
    
    printf("thank you for playing!");
    return 0;
}
