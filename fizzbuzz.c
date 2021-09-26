#include <stdio.h>
#include <stdlib.h>

int main()
{

for(int i = 1; i < 101; i++) /* Boucle qui traite les nombres entre 1 et 100 compris */

  {

  if ((i % 7 == 0 || i % 10 == 7) && (i % 3 == 0 || i % 10 == 3)) { /* Si le nombre est multiple de 7 et ou de 3 et qu'il finit par 7 ou 3 */

      printf("FizzBuzz "); /* Alors il affiche FizzBuzz */

    }
    else if (i % 7 == 0 || i % 10 == 7){ /* Et si le nombre est un multiple de 7 ou se termine par 7*/

      printf("Buzz "); /* Alors il affiche Buzz */

    }
    else if (i % 3 == 0 || i % 10 == 3){ /* le nombre est un multiple de 3 ou se termine par 3 */

      printf("Fizz "); /* Alors il affiche Fizz */
    }
    else { /* else par défaut */

      printf("%d ",i); /* Alors il affiche i  */

      }


  }


  return 0;

}
