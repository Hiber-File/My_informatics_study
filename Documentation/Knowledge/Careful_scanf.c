#include <stdio.h>
int main(void)
{
char tablica[100]; /* 1 */
scanf("%s", tablica); /* 2 */
return 0;
}

/*
Robi on niewiele. W linijce 1 deklarujemy tablicę 100 znaków czyli mogącą przechować
napis długości 99 znaków. Nie przejmuj się jeżeli nie do końca to wszystko rozumiesz — pojęcia
takie jak tablica czy ciąg znaków staną się dla Ciebie jasne w miarę czytania kolejnych
72 ROZDZIAŁ 10. PODSTAWOWE PROCEDURY WEJŚCIA I WYJŚCIA
rozdziałów. W linijce 2 wywołujemy funkcję scanf(), która odczytuje tekst ze standardowego
wejścia. Nie zna ona jednak rozmiaru tablicy i nie wie ile znaków może ona przechować przez
co będzie czytać tyle znaków, aż napotka biały znak (format %s nakazuje czytanie pojedynczego
słowa), co może doprowadzić do przepełnienia bufora. Niebezpieczne skutki czegoś
takiego opisane są w rozdziale poświęconym napisom. Na chwilę obecną musisz zapamiętać,
żeby zaraz po znaku procentu podawać maksymalną liczbę znaków, które może przechować
bufor, czyli liczbę o jeden mniejszą, niż rozmiar tablicy. Bezpieczna wersją powyższego kodu
jest:
*/

#include <stdio.h>
int main(void)
{
char tablica[100];
scanf("%99s", tablica);
return 0;
}
