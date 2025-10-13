#include <stdlib.h>
#include <stdio.h>

int main(){
  int kruuna = 0;
  int klaava = 0;
  for(int i = 0; i < 100; i++){
    if(rand() % 2 == 0){
      kruuna++;
    } else {
      klaava++;
    }
  }

  printf("Heittojen tulos: %d kruunua ja %d klaavaa", kruuna, klaava);
}