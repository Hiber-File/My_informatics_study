#include <stdio.h>
int main()
{
const int stala=10;

int a = 10;
    {                                    /* otwarcie lokalnego bloku */
        int b = stala;
        printf("%d %d", a, b);
    }                                    /* zamknięcie lokalnego bloku, zmienna b jest usuwana */



int i=010;                               //zapis w systemie osemkowym
printf("\n\n %d",i);

i=0x10;                                  //zapis w systemie szesnastkowym
printf("\n\n %d",i);

i=0b10;                                  //zapis w systemie binarynm
printf("\n\n %d",i);


float j=3.14;                            //zapis w systemie dziesietnym
printf("\n\n %f",j);

j=3e5;                                   //zapis wykladniczy
printf("\n\n %f",j);


for(i=0;i<stala;++i)                     /*  https://pl.wikibooks.org/wiki/C/Napisy#Znaki_specjalne   */
{
char znak='\a';                          //znak lokalny dla petli for
printf("%c",znak);
}

char znak='a';                           //znak globalny (lokalny dla funkcji int main() )
printf("\n\n %c    %d\n\n",znak,znak);       //wypisuje podany symbol lub jego wartosc w ascii

/*specyfikatory*/
{
signed char a;                  /* zmienna a przyjmuje wartości od -128 do 127 */
unsigned char b;                /* zmienna b przyjmuje wartości od 0 do 255 */
unsigned short c;
unsigned long int d;
}


/*modyfikatory*/
volatile float liczba1;                  //???
register int liczba2;                    /*zmusza kompilator do przechowywania czesto uzywanej liczby w rejestrze dla szybszego wykonania */
                                         /*jednakze nowoczesne kompilatory same decyduja co ma trafic do rejestru */

void dodaj(int liczba)
{
int zmienna = 0; // bez static
zmienna = zmienna + liczba;
printf ("Wartosc zmiennej %d\n", zmienna);
}
dodaj(3);               //Wartosc zmiennej 3
dodaj(5);               //Wartosc zmiennej 5
dodaj(4);               //Wartosc zmiennej 4

void dodaj2(int liczba2)
{
static int zmienna2 = 0;
zmienna2 = zmienna2 + liczba2;
printf ("Wartosc zmiennej %d\n", zmienna2);
}
                                           /*jezeli jednak deklaracje zmiennej zmienimy na static int zmienna = 0, to wartość zmiennej*/
                                           /*zostanie zachowana i po podobnym wykonaniu funkcji powinnysmy ujrzec*/
dodaj2(3);               //Wartosc zmiennej 3
dodaj2(5);               //Wartosc zmiennej 8
dodaj2(4);               //Wartosc zmiennej 12


auto int xd;            /*zadeklarowanie ze zmienna jest lokalna  super useless spadek po jezyku B*/


/* do sprawdzenia  static zmienna globalna    oraz modyfikator extern   */

return 0;
}
