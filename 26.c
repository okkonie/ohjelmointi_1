#include <stdio.h>

int korotaKokonaislukuPotenssiin(int kanta, int potenssi){
  int luku = 1;
  for(int i = 0; i < potenssi; i++){
    luku *= kanta;
  }

  return luku;
};

int main() {
  int kanta;
  int potenssi;

  printf("Anna kantaluku > ");
  scanf("%d", &kanta);
  printf("Anna potennsi > ");
  scanf("%d", &potenssi);

  printf("Luku %d korotettuna potenssiin %d on %d", kanta, potenssi, korotaKokonaislukuPotenssiin(kanta, potenssi));
}