#include <stdlib.h>
#include <stdio.h>

int satunnainenLuku(){
  return rand() % (10 - 1 + 1) + 1;
}

int main(){
  int vastaus = 0;

  while(1){
    printf("Anna luku -1 lopettaaksesi\n");

    int luku1 = satunnainenLuku();
    int luku2 = satunnainenLuku();

    printf("Paljonko on %d kertaa %d? ", luku1, luku2);
    scanf("%d", &vastaus);

    if(vastaus == -1){return 0;}

    while(vastaus != luku1 * luku2){
      printf("Väärin, yritä uudelleen > ");
      scanf("%d", &vastaus);

      if(vastaus == -1){return 0;}
    }

    printf("Oikein!\n");

  }
}