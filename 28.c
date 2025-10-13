#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int summaa(int luku) {
    int summa = 0;

    while (luku > 0) {
        summa += luku % 10;
        luku /= 10;
    }

    return summa;
}

bool parillinen_ja_isompi_kuin_vastaus_kaikkeen(int tulos){
  return tulos % 2 == 0 && tulos > 42;
}

bool onko_erityisluku(int tulos){
  return tulos == 6 || tulos == 9;
}

bool ei_jaollinen_kolmella(int tulos){
  return tulos % 3 != 0;
}

int main(void) {

  int luku=-1;
  int tulos=-1;

  printf("\nAnna positiivinen kokonaisluku: ");
  scanf("%d", &luku);

  tulos=summaa(luku);
  printf("\nAnnetun luvun numeroiden summa on: %d\n", tulos);

  if(parillinen_ja_isompi_kuin_vastaus_kaikkeen(tulos)){
    printf("Tulos %d on parillinen ja isompi kuin 42\n", tulos);
  } else {
    printf("Tulos %d ei ole parillinen ja isompi kuin 42\n", tulos);
  }

  if(onko_erityisluku(tulos)){
    printf("Tulos %d on numero 6 tai 9\n", tulos);
  } else {
    printf("Tulos %d ei ole numero 6 tai 9\n", tulos);
  }

  if(ei_jaollinen_kolmella(tulos)){
    printf("Tulos %d ei ole jaollinen luvulla 3\n", tulos);
  } else {
    printf("Tulos %d ei ole ei-jaollinen luvulla 3\n", tulos);
  }

  return 0;
}

