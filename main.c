#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int randomNumber = rand() % 5;
    
    printf("please pick a number 0 - 5. if you guess right you win\n");
    printf("guess wrong and face your fate ...");
    
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

