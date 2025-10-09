#include <stdio.h>
#include <math.h>

int main(){
  int kymmenjarj = 0;
  int binaari = 0;
  
  printf("Anna binaariluku > ");
  scanf("%d", &binaari);

  for(int i = 0; i < 5; i++){
    int bitti = binaari % 10;
    kymmenjarj += bitti * pow(2, i);
    binaari /= 10;
  }

  printf("Luku kymmenjarjestelmassas %d", kymmenjarj);

  return 0;
}