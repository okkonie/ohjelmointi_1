#include <stdio.h>

int main(){

  double tuntiPalkka = 0;
  double tuntienMaara = 0;
  double veroProsentti = 0;


  printf("Anna tuntipalkka > ");
  scanf("%lf", &tuntiPalkka);

  printf("Tehdyt tunnit > ");
  scanf("%lf", &tuntienMaara);

  printf("Anna veroprosentti > ");
  scanf("%lf", &veroProsentti);


  double bruttoPalkka = 0;

  if (tuntienMaara > 40) {
    bruttoPalkka = (40 * tuntiPalkka) + ((tuntienMaara - 40) * 1.5 * tuntiPalkka);
  } else {
    bruttoPalkka = tuntienMaara * tuntiPalkka;
  }

  double veroOsuus = bruttoPalkka * (veroProsentti / 100);
  double nettoPalkka = bruttoPalkka - veroOsuus;


  printf("Nettopalkkasi on %.2f euroa josta veron osuus on %.2f euroa", nettoPalkka, veroOsuus);

  return 0;
}