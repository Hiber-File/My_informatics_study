#include <stdio.h>
#include <stdlib.h>
int main()
{
   int liczba;
   char bufor[64];
   printf("Podaj liczbe: ");                        //Podajemy liczbe do przekonwerotwania.
   scanf("%d", &liczba);
   printf("W systemie binarnym: %s\n", itoa(liczba,bufor,64));        //z dec na bin i zapisuje w bufor.
   printf("W systemie oktalnym: %s\n", itoa(liczba,bufor,8));         //z dec na okt i zapisuje w bufor.
   printf("W systemie hexadecymalnym: %s\n", itoa(liczba,bufor,16));  //z dec na hex
   return 0;
}
