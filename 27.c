#include <stdio.h>
#include <stdlib.h>

int sekunneiksi(int aika[3]){
  return aika[0] * 3600 + aika[1] * 60 + aika[2];
}

int main() {
  int aika1[3];
  int aika2[3];

  printf("Anna eka aika > ");
  for(int i = 0; i < 3; i++){
    scanf("%d", &aika1[i]);
  }

  printf("Anna toka aika > ");
  for(int j = 0; j < 3; j++){
    scanf("%d", &aika2[j]);
  }

  int eroSekunteina = abs(sekunneiksi(aika1) - sekunneiksi(aika2));
  printf("Aikaero on: %d sekuntia \n", eroSekunteina);

  int tunnit, minuutit;

  tunnit = eroSekunteina / 3600;
  eroSekunteina %= 3600;

  minuutit = eroSekunteina / 60;
  eroSekunteina %= 60;


  printf("Aika on %d tuntia %d minuuttia %d sekuntia", tunnit, minuutit, eroSekunteina);

}