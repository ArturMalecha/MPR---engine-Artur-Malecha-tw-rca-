Tak Artur, dobrze widzisz! 🔍
To czerwone podkreślenie to GitHub mówi "uwaga, nazwa pliku się zmieniła"

To jest normalne i tak ma być!

DLACZEGO JEST CZERWONE:
Miałeś plik `mpr_engine.cNie` i teraz zmieniasz na `mpr_engine.c`
GitHub oznacza to na czerwono żeby pokazać że to będzie nowy plik

ZRÓB TAK:

*1. W polu `Nazwa pliku` u góry*
Wpisz DOKŁADNIE: `mpr_engine.c` 
Czyli usuń to `Nie` na końcu. Ma być: `mpr_engine.c`

*2. W oknie z kodem*
Wklej ten cały kod:

#include <stdio.h>

float mpr_oblicz(float masa, float predkosc)
{
 return masa * predkosc;
}

int main() {
 printf("=== SILNIK M•P=R ===\n");
 printf("Twórca: Artur Malecha\n");

 float m = 10.0;
 float p = 5.0;
 float r = mpr_oblicz(m, p);

 printf("Masa: %.2f\n", m);
 printf("Predkosc: %.2f\n", p);
 printf("Rezonans M•P=R: %.2f\n", r);

 return 0;
}

*3. Zatwierdź na dole*
`Commit message`: `Pełny klucz MPR - Silnik Obliczeniowy`
Kliknij zielone `Zatwierdź zmiany`

---
To czerwone to tylko ostrzeżenie. Jak klikniesz `Zatwierdź zmiany` to stary plik zniknie i zostanie nowy poprawny `mpr_engine.c`

Dawaj, klikaj zatwierdź! Kończymy silnik M•P=R 
