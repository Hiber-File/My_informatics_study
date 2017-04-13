#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>

int main (void)
{

struct ksiazka
 {
char tytul[50];
char autor[30];
int ilosc_szt;
float cena;
 }pozycja[10];

struct ksiazka pozycja2;

pozycja[1].cena=1;
pozycja2.cena=2;

printf("\n pozycja[1].cena=%.f",pozycja[1].cena);
printf("\n pozycja2.cena=%.f",pozycja2.cena);


return 0;
}
