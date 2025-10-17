#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int satunnainenLuku(){
  return rand() % (10 - 1 + 1) + 1;
}

int main(){
  int vastaus = 0;
  int oikea = 0;
  bool kerto = rand() % 2 == 1;

  while(1){
    printf("Anna luku -1 lopettaaksesi\n");

    int luku1 = satunnainenLuku();
    int luku2 = satunnainenLuku();

    if(kerto){
      printf("Paljonko on %d kertaa %d? ", luku1, luku2);
      oikea = luku1 * luku2; 
    } else {
      printf("Paljonko on %d jaettuna %d? ", luku1 * luku2, luku2);
      oikea = luku1 * luku2 / luku2;
    }
    scanf("%d", &vastaus);

    if(vastaus == -1){return 0;}

    while(vastaus != oikea){
      printf("Väärin, yritä uudelleen > ");
      scanf("%d", &vastaus);

      if(vastaus == -1){return 0;}
    }

    printf("Oikein!\n");

  }
}