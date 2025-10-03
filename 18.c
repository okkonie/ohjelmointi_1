#include <stdio.h>

int main() {
  int laskuri = 0;
  double luku = 0.0;
  double summa = 0.0;
  double keskiarvo = 0.0;

  while(luku >= 0) {
    printf("Anna reaaliluku (negatiivinen lopettaa) > ");
    scanf("%lf", &luku);
    
    if(luku >= 0) {
      laskuri += 1;
      summa += luku;
    }
  }

  if (laskuri != 0 && summa != 0) {
    keskiarvo = summa / (double)laskuri;
  }
  printf("%.2f", keskiarvo);

  return 0;
}