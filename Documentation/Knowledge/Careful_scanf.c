#include <stdio.h>
int main(void)
{
char tablica[100]; /* 1 */
scanf("%s", tablica); /* 2 */
return 0;
}

/*
Robi on niewiele. W linijce 1 deklarujemy tablicę 100 znaków czyli mogącą przechować
napis długości 99 znaków. 

W linijce 2 wywołujemy funkcję scanf(), która odczytuje tekst ze standardowego
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

/*
Funkcja scanf() zwraca liczbę poprawnie wczytanych zmiennych lub EOF jeżeli nie ma
już danych w strumieniu lub nastąpił błąd. Załóżmy dla przykładu, że chcemy stworzyć
program, który odczytuje po kolei liczby i wypisuje ich 3 potęgi. W pewnym momencie
dane się kończą lub jest wprowadzana niepoprawna dana i wówczas nasz program powinien
zakończyć działanie. Aby to zrobić, należy sprawdzać wartość zwracaną przez funkcję scanf()
w warunku pętli:
*/

#include <stdio.h>
int main(void)
{
int n;
while (scanf("%d", &n)==1)
{
printf("%d\n", n*n*n);
}
return 0;
}

//Podobnie możemy napisać program, który wczytuje po dwie liczby i je sumuje:

#include <stdio.h>
int main(void)
{
int a, b;
while (scanf("%d %d", &a, &b)==2)     //==2  liczba wprowadzonych argumentow
{
printf("%d\n", a+b);
}
return 0;
}

/*
Rozpatrzmy teraz trochę bardziej skomplikowany przykład. Otóż, ponownie jak poprzednio
nasz program będzie wypisywał 3 potęgę podanej liczby, ale tym razem musi ignorować
błędne dane (tzn. pomijać ciągi znaków, które nie są liczbami) i kończyć działanie tylko w
momencie, gdy nastąpi błąd odczytu lub koniec pliku.
*/
#include <stdio.h>
int main(void)
{
int result, n;
do
{
result = scanf("%d", &n);
if (result==1)
{
printf("%d\n", n*n*n);
}
else if (!result) { /* !result to to samo co result==0 */
result = scanf("%*s");
}
}
while (result!=EOF);
return 0;
}
/*
Zastanówmy się przez chwilę co się dzieje w programie. Najpierw wywoływana jest
funkcja scanf() i następuje próba odczytu liczby typu int. Jeżeli funkcja zwróciła 1 to liczba
została poprawnie odczytana i następuje wypisanie jej trzeciej potęgi. Jeżeli funkcja zwróciła
0 to na wejściu były jakieś dane, które nie wyglądały jak liczba. W tej sytuacji wywołujemy
funkcję scanf() z formatem odczytującym dowolny ciąg znaków nie będący białymi znakami
z jednoczesnym określeniem, żeby nie zapisywała nigdzie wyniku. W ten sposób niepoprawnie
wpisana dana jest omijana. Pętla główna wykonuje się tak długo jak długo funkcja scanf()
nie zwróci wartości EOF.
*/
