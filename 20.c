#include <stdio.h>

int main() {
  double luku = 0.0;
  double summa = 0.0;
  double keskiarvo = 0.0;
  int laskuri = 0;

  for(int i = 1; luku >= 0; i++){
    printf("Anna reaaliluku (negatiivinen lopettaa) > ");
    scanf("%lf", &luku);
    
    if(luku >= 0) {
      summa += luku;
      laskuri = i;
    }
  }
  if(laskuri != 0){
    keskiarvo = summa / laskuri;
  }
  printf("%.2f", keskiarvo);

  return 0;
}