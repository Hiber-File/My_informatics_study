9.4 Natychmiastowe kończenie programu — funkcja exit
Program może zostać w każdej chwili zakończony — do tego właśnie celu służy funkcja exit.
Używamy jej następująco:
exit (kod_wyjścia);
66 ROZDZIAŁ 9. INSTRUKCJE STERUJĄCE
Liczba całkowita kod wyjścia jest przekazywana do procesu macierzystego, dzięki czemu
dostaje on informację, czy program w którym wywołaliśmy tą funkcję zakończył się poprawnie
lub czy się tak nie stało. Kody wyjścia są nieustandaryzowane i żeby program był w pełni
przenośny należy stosować makra EXIT SUCCESS i EXIT FAILURE, choć na wielu systemach kod
0 oznacza poprawne zakończenie, a kod różny od 0 błędne. W każdym przypadku, jeżeli nasz
program potrafi generować wiele różnych kodów, warto je wszystkie udokumentować w ew.
dokumentacji. Są one też czasem pomocne przy wykrywaniu błędów.
