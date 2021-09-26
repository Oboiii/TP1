#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int chiffre;
    int resultat=0;
    c = getchar();

    while ((c>='0' && c<=9) || (c>='a' && c<='f') || (c>='A' && c<='F'));

       {

        if

            (c>='0' && c<='9')

            chiffre = c - '0';

        else if (c>='a' && c<='f')

            chiffre = c - 'a' +10;


        else (c>='A' && c<='F');

            chiffre = c - 'A' +10;


        resultat = (resultat * 16 + chiffre);

        c = getchar();

        }

        printf ("en decimal, ce nombre HEXA vaut : %d" ,resultat);

        return 0;
        }




