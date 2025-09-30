#include <stdio.h>

int main(){

  double lainaSumma = 0;
  double lainanKorkoProsentti = 0;
  int lainaPaivienMaara = 0;


  printf("Anna lainan summa > ");
  scanf("%lf", &lainaSumma);

  printf("Anna lainan korko > ");
  scanf("%lf", &lainanKorkoProsentti);

  printf("Anna lainapaivien maara > ");
  scanf("%d", &lainaPaivienMaara);

  double kokonaisKorko = lainaSumma * (lainanKorkoProsentti / 100.0) * (lainaPaivienMaara / 365.0);

  printf("Lainapaaoman %.2f euroa korko %d paivalta korkoprosentilla %.2f on yhteensa %.2f euroa.", lainaSumma, lainaPaivienMaara, lainanKorkoProsentti, kokonaisKorko);

  return 0;
}