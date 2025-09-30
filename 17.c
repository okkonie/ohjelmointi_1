#include <stdio.h>

int main(){
  int rivit = 10;

  // rivit
  for(int i = 1; i <= 10; i++){

    // jakojaannos jotta 10 toimii
    int alku = i % 10;

    // valilyonnit (9 - rivin indeksi)
    for(int j = 9; j >= i; j--){
      printf(" ");
    }

    // nouseva puoli
    for(int k = 0; k < i; k++){
      printf("%d",(alku + k) % 10);
    }

    // laskeva puoli
    for(int k = i - 2; k >= 0; k--){
      printf("%d",( alku + k) % 10);
    }

    // seuraava rivi
    printf("\n");
  }
}