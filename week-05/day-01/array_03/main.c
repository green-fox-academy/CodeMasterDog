#include <stdio.h>
#include <stdlib.h>

/*
 * Create a 2 dimensonal array of characters. 8x8
 * Fill the array with X and space alternating.
 * Print it out row by row. (It should resemble a chess board)
 * Designate a character for each chess peace. (Queen could be Q, King could be K, etc.)
 * Set up the start of a game.
 * Print it out again.
 * Make one move with a horse.
 * Print it again.
 */
int main()
{
  char array[8][8];
  int ln;

  ln = 48;



  for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x+=2){
        if ( y % 2 == 0) {
            array[y][x] = 'x';
            array[y][x + 1] = 'o';
        }

        else {
            array[y][x] = '0';
            array[y][x + 1] = 'x';
        }


        if ( x % 8 == 0)
            printf("\n");
        printf("%c" , array[y][x]);
        }
  }

    /*for(int i = 0; i < 8; i++) {
        for(int a = 0; a < 8; a++) {
            printf("%c" , array[i][a]);
        }
    }
    */





    return 0;
}
