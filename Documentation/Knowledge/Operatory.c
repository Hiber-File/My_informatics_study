#include <stdio.h>
int main()
{

{
/*Należy pamiętać, że (w pewnym uproszczeniu) wynik operacji jest typu takiego jak największy
z argumentów. Oznacza to, że operacja wykonana na dwóch liczbach całkowitych
nadal ma typ całkowity nawet jeżeli wynik przypiszemy do zmiennej rzeczywistej. Dla przykładu,
poniższy kod:*/
float a = 7 / 2;
printf("%f\n", a);
/*wypisze (wbrew oczekiwaniu początkujących programistów) 3.0, a nie 3.5. Odnosi się*/
/*to nie tylko do dzielenia, ale także mnożenia, np.:*/
}

{
float a = 1000 * 1000 * 1000 * 1000 * 1000 * 1000;
printf("%f\n", a);
/*prawdopodobnie da o wiele mniejszy wynik niż byśmy się spodziewali. Aby wymusić*/
/*obliczenia rzeczywiste należy zmienić typ jednego z argumentów na liczbę rzeczywistą po*/
/*prostu zmieniając literał lub korzystając z rzutowania, np.:*/
}

{
float a = 7.0 / 2;
float b = (float)1000 * 1000 * 1000 * 1000 * 1000 * 1000;
printf("%f\n", a);
printf("%f\n", b);
}



{
int a, b, c;
a = 3;
b = a--; /* po operacji b=3 a=2 */
printf("\n\n  %d   %d   \n\n",b,a);
c = --b; /* po operacji b=2 c=2 */
printf("\n\n  %d   %d   \n\n",c,b);
}


{
int a = 6;
printf ("6 << 2 = %d\n", a<<2); /* wypisze 24 */
printf ("6 >> 2 = %d\n", a>>2); /* wypisze 1 */
}


{
float a, b, c;
a = 1e1; /* tj. 10 do potęgi 10 */                  printf("\n a=%f",a);
b = 1e-1; /* tj. 10 do potęgi -10 */                printf("\n b=%f",b);
c = b; /* c = b */                                  printf("\n c=%f",c);
c = c + a; /* c = b + a (teoretycznie) */           printf("\n c=%f",c);
c = c - a; /* c = b + a - a = b (teoretycznie) */   printf("\n c=%f",c);
printf("\n%d\n", c == b); /* wypisze 0 ze wzgledu na szacunkowe obliczenia zmiennych typu float -> nie porownywac float/double */
}

/*
A && B
A || B
Jeśli A jest fałszywe to nie trzeba liczyć B w pierwszym wyrażeniu, bo fałsz i dowolne wyrażenie
zawsze da fałsz. Analogicznie, jeśli A jest prawdziwe, to wyrażenie  jest prawdziwe i
wartość B nie ma znaczenia.
Poza zwiększoną szybkością zysk z takiego rozwiązania polega na możliwości stosowania
efektów ubocznych. Idea efektu ubocznego opiera się na tym, że w wyrażeniu można wywołać
funkcje, które będą robiły poza zwracaniem wyniku inne rzeczy, oraz używać podstawień.
Popatrzmy na poniższy przykład:

( (a > 0) || (a < 0) || (a = 1) )

Jeśli a będzie większe od  to obliczona zostanie tylko wartość wyrażenia (a > 0) — da ono
prawdę, czyli reszta obliczeń nie będzie potrzebna. Jeśli a będzie mniejsze od zera, najpierw
zostanie obliczone pierwsze podwyrażenie a następnie drugie, które da prawdę. Ciekawy będzie
jednak przypadek, gdy a będzie równe zero — do a zostanie wtedy podstawiona jedynka
i całość wyrażenia zwróci prawdę (bo  jest traktowane jak prawda).
Efekty uboczne pozwalają na różne szaleństwa i wykonywanie złożonych operacji w samych
warunkach logicznych, jednak przesadne używanie tego typu konstrukcji powoduje,
że kod staje się nieczytelny i jest uważane za zły styl programistyczny.
*/



//a ? b : c
//Jego działanie wygląda następująco: najpierw oceniana jest wartość logiczna wyrażenia a;
//jeśli jest ono prawdziwe, to zwracana jest wartość b, jeśli natomiast wyrażenie a jest nieprawdziwe,
//zwracana jest wartość c.
//Praktyczne zastosowanie — znajdowanie większej z dwóch liczb:
//a = (b>=c) ? b : c; /* Jeśli b jest większe bądź równe c, to zwróć b.
//W przeciwnym wypadku zwróć c. */
//lub zwracanie modułu liczby:
//a = a < 0 ? -a : a;

{
printf("sizeof(char ) = %d\n", sizeof(char ));          /*Podaje wielkosci w bajtach*/
printf("sizeof(short ) = %d\n", sizeof(short ));
printf("sizeof(int ) = %d\n", sizeof(int ));
printf("sizeof(long ) = %d\n", sizeof(long ));
printf("sizeof(float ) = %d\n", sizeof(float ));
printf("sizeof(double) = %d\n", sizeof(double));
printf("sizeof(long double) = %d\n", sizeof(long double));
/*    Standard języka C nakłada jedynie na kompilatory
następujące ograniczenia: int — nie może być krótszy niż 16 bitów; int — musi być
dłuższy lub równy short a nie może być dłuższy niż long; short int — nie może być
krótszy niż 16 bitów; long int — nie może być krótszy niż 32 bity; */
}

return 0;
}
