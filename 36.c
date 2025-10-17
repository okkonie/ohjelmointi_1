#include <stdio.h>
#include <stdlib.h>

int main(){

  while(1){
    char jatko;
    int vastaus = 0;
    int luku = rand() % 100 + 1;

    printf("Arvaa luku valilta 1-100 > ");

    while(vastaus != luku){
      scanf("%d", &vastaus);

      if(vastaus < luku){
        printf("Liian pieni luku, yrita uudelleen.\n");
      } else if(vastaus > luku){
        printf("Liian suuri luku, yrita uudelleen.\n");
      } else {
        printf("OIKEIN!\n");
      }
      while (getchar() != '\n');
    }

    vastaus = 0;

    printf("Haluatko yrittaa uudelleen (vastaa k, jos haluat jatkaa ja e jos et halua jatkaa pelia)? ");

    while(jatko != 'k' || jatko != 'e'){
      scanf(" %c", &jatko);

      if(jatko == 'e'){
        return 0;
      } else if(jatko == 'k'){
        break;
      } else {
        printf("Vaara merkki (yrita uudelleen) > ");
      }
    }
  }

  return 0;
}