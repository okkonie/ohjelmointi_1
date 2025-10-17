#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int satunnainenLuku(){
  return rand() % (10 - 1 + 1) + 1;
}

int main(){
  int vastaus = 0;
  int oikeat = 0;
  int vaarat = 0;

  while(1){

    bool kerto = (rand() % 2 == 1);
    int luku1 = satunnainenLuku();
    int luku2 = satunnainenLuku();
    int oikea = 0;

    printf("Anna luku -1 lopettaaksesi\n");

    if(kerto){
      printf("Paljonko on %d kertaa %d? ", luku1, luku2);
      oikea = luku1 * luku2;
    } else {
      printf("Paljonko on %d jaettuna %d? ", luku1 * luku2, luku2);
      oikea = luku1 * luku2 / luku2;
    }

    scanf("%d", &vastaus);

    if(vastaus == -1){break;}

    if(vastaus == oikea){
      oikeat++;
    } else {
      vaarat++;
    }

    while(vastaus != oikea){
      printf("Väärin, yritä uudelleen > ");
      scanf("%d", &vastaus);
      if(vastaus == -1){break;}
    }

    if(vastaus == -1){break;}

    printf("Oikein\n\n");
  }

  printf("\nSait %d vastausta oikein ja %d meni pikkuisen pieleen\n", oikeat, vaarat);

  if(oikeat >= vaarat){
    printf("Arvosanasi on: \"Hyvaksytty\"");
  } else {
    printf("Arvosanasi on: \"Hylatty\"");
  }

  return 0;
}