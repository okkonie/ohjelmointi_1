#include <stdio.h>

double laskeParkkiMaksu(double aika){
  double hinta = 0.0;

  if(aika < 3.0){
    hinta = 2.0;
  } else {
    hinta = 2.0 + (aika - 3.0) * 0.5;
  }

  if(hinta > 10.0){
    return 10.0;
  } else {
    return hinta;
  }
}

int main(){

  double tunnit1, tunnit2, tunnit3;

  printf("Ensimmaisen tunnit > ");
  scanf("%lf", &tunnit1);
  printf("Toisen tunnit > ");
  scanf("%lf", &tunnit2);
  printf("Kolmannen tunnit > ");
  scanf("%lf", &tunnit3);

  printf("%11s %11s %11s \n", "Asiakas", "Tunnit", "Veloitus");
  printf("%11s %11.2f %11.2f \n", "1", tunnit1, laskeParkkiMaksu(tunnit1));
  printf("%11s %11.2f %11.2f \n", "2", tunnit2, laskeParkkiMaksu(tunnit2));
  printf("%11s %11.2f %11.2f \n", "3", tunnit3, laskeParkkiMaksu(tunnit3));
  printf("%11s %11.2f %11.2f \n", "YHTEENSA", tunnit1 + tunnit2 + tunnit3, laskeParkkiMaksu(tunnit1) + laskeParkkiMaksu(tunnit2) + laskeParkkiMaksu(tunnit3));

  return 0;
}