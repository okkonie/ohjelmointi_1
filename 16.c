#include <stdio.h>

int main(){

  int bensanMaara = 0;
  int kilometrit = 0;

  int lopullinenBensa = 0;
  int lopullisetKilometrit = 0;

  while(1){
    printf("Anna tankatun bensiinin maara ( -1 lopettaa ) > ");
    scanf("%d", &bensanMaara);

    if (bensanMaara == -1){break;}

    lopullinenBensa += bensanMaara;

    printf("Ajetut kilometrit > ");
    scanf("%d", &kilometrit);

    lopullisetKilometrit += kilometrit;

    printf("Keskikulutus talla tankkauksella on %.3f litraa satasella \n", (double)bensanMaara * 100 / (double)kilometrit);
  }
  printf("Keskikulutus talla tankkauksella on %.3f litraa satasella \n", (double)lopullinenBensa * 100 / (double)lopullisetKilometrit);

  return 0;
}