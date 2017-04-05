W języku C++ można deklarować zmienne w nagłówku pętli “for” w następujący sposób:
for(int i=0; i<10; ++i)




Funkcje definiuje się poza główną funkcją programu (main). W języku C nie można tworzyć
zagnieżdżonych funkcji (funkcji wewnątrz innych funkcji).




W C zwykle przyjmuje się, że 0 oznacza poprawne zakończenie funkcji:
return 0; /* funkcja zakończona sukcesem */
a inne wartości oznaczają niepoprawne zakończenie:
return 1; /*funkcja zakończona niepowodzeniem */
Ta wartość może być wykorzystana przez inne instrukcje, np. if .
