/* Area where we include a bunch of libraries */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

/* Main code */

int main(void)
{
  srand (time (NULL));
  int r = rand () % 5; /*generate random number*/

  /* Guessing game by 2 epic developers! */

  printf ("Guessing Game by 2 epic programmers\n");

  printf ("please pick a number 0 - 5. if you guess right you win!\n");
  printf ("guess wrong and face your fate ...\n");
  printf ("This uses the GPL V3 Licence btw. Read LICENCE to see it. \n");
  printf ("P.S. Do NOT enter a letter or bad things will happen...\n");

  int g;
  scanf ("%d", &g); /*look for user input and store it under the variable of g*/

  printf ("you guessed %d\n", g);
  printf ("the correct answer was %d\n", r);

  if (g == r)	/* Win or Lose detector */
    {

      printf ("you win!\n");
    }
  else
    {

      printf ("you lost!\n");
    }

  printf ("thank you for playing!"); /* Thank-You Message */
  return 0;
}
