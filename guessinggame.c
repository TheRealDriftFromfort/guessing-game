/* Area where we include a bunch of stuff */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

/* Main code */

int main()
{
    srand(time(NULL));
    int randomNumber = rand() % 5;
    
    printf("please pick a number 0 - 5. if you guess right you win\n");
    printf("guess wrong and face your fate ...");
    printf("P.S. Do NOT enter a letter or bad things will happen...");
    
    int guess;
    scanf("%d", &guess);
    
    printf("you guessed %d\n", guess);
    printf("the correct answer was %d\n", randomNumber);
    
    if(guess == randomNumber)
    {
        
        printf("you win!");
    } else
    {
        
        printf("you lost!");
    }
    
    printf("thank you for playing!");
    return 0;
}
