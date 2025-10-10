#include <stdio.h>

int sekunneiksi(int tunnit, int minuutit, int sekunnit){
  return(tunnit * 3600 + minuutit * 60 + sekunnit);
};

int main() {
  int tunnit1, minuutit1, sekunnit1, tunnit2, minuutit2, sekunnit2;

  printf("Ensimmaiset tunnit > ");
  scanf("%d", &tunnit1);
  printf("Ensimmaiset minuutit > ");
  scanf("%d", &minuutit1);
  printf("Ensimmaiset tunnit > ");
  scanf("%d", &sekunnit1);
  printf("Toiset tunnit > ");
  scanf("%d", &tunnit2);
  printf("Toiset minuutit > ");
  scanf("%d", &minuutit2);
  printf("Toiset tunnit > ");
  scanf("%d", &sekunnit2);

  printf("Aikaero on: %d sekuntia", sekunneiksi(tunnit1, minuutit1, sekunnit1) - sekunneiksi(tunnit2, minuutit2, sekunnit2));
  printf("Aika on %d tuntia %d minuuttia %d sekuntia", tunnit1 - tunnit2, minuutit1 - minuutit2, sekunnit1 - sekunnit2);

}