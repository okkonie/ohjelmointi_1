#include <stdio.h>

int main() {
  double summa = 0.0;
  double luku = 0.0;
  int laskuri = 0;
  int virheelliset = 0;

  printf("Anna reaaliluku ( negat arvo lopetaa ) > ");

  while(virheelliset < 3) {

    // onko annettu luku double
    if(scanf("%lf", &luku) == 1) {
      if (luku < 0) {
        break;
      }
      summa += luku;
      laskuri++;
      printf("Anna reaaliluku ( negat arvo lopetaa ) > ");
    } else {
      virheelliset++;

      printf("\nEi ollut reaaliluku \nVirheellinen syote numero %d", virheelliset);

      if(virheelliset < 3){
        printf("\n\nEi kelpaa, yrita uudelleen! > ");
      }

      while (getchar() != '\n');
    }

    if(virheelliset == 3) {
      printf("\n\nVirheellinen syote kolme kertaa. Ohjelma lopetetaan");
      return 0;
    }
  }

  printf("\n%.2f", summa / laskuri);

  return 0;
}