#include <stdio.h>

int main(void){
  int i;
  int luku = 0;

  printf("Anna luku > ");
  scanf("%d", &luku);
  int max = luku;

  for (i = 0; i < 9; i = i + 1) {

    printf("Anna luku > ");
    scanf("%d", &luku);

    if (luku > max) {
      max = luku;
    }

  };

  printf("Suurin syottamasi luku oli %d", max);
  return 0;
}