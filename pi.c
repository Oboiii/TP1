#include <stdio.h>
#include <stdlib.h>

int main()
{
  int r=1, P=0, N, max = 1,min = -1;
  float Pi,x,y;

  scanf("%d", &N);

    for(int i=0; i < N; i++)

    {

        x = ((double)rand()/RAND_MAX)*(max - min) + min; /* realisation d’une variable aleatoire uniforme sur [0, 1] pour x*/
        y = ((double)rand()/RAND_MAX)*(max - min) + min; /* realisation d’une variable aleatoire uniforme sur [0, 1] pour y*/


        if ((x*x) + (y*y) < 1)
          {
            P=P+1;
          }
     }


      Pi = 4*(double)P/N;
      printf("Le resultat de P est %f", Pi);

    return 0;
}
